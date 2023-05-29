#include <iostream>
#include <cmath>

using namespace std;

enum enPrimNotPrime  { Prime = 1, NotPrime = 0};

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int counter = 0; counter <= M; counter++)
    {
        if (Number % counter == 0)
        return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;

}

int RandomNumber(int From, int To)
{   
    string Text;

    int randNum = rand() % (To - From + 1) + From;

    return randNum;
    
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
    cout << "enter number of array: ";

    cin >> arrLength;

    for(int i = 0; i <= arrLength-1; i++)
        arr[i] = RandomNumber(1, 100);

};


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0 ; i <= arrLength-1; i++)
    {
        cout << arr[i] << " ";
    }
}


void CopyOnlyPrimeNumberInArray(int arrSource[100],int arrDestination[100],int arrLength,int arr2Length)
{
    int counter = 0;
    for (int i = 0; i <= arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDestination[counter] == arrSource[i];
            counter ++;
        }
    }
    arr2Length == --counter;
}

int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100], arrLength;

    FillArrayWithRandomNumber(arr, arrLength);

    int arr2[100], arr2Length;
    CopyOnlyPrimeNumberInArray(arr, arr2, arrLength, arr2Length);

    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);

    cout << "Prime numbers in array 2: ";
    PrintArray(arr2, arr2Length);

    return 0;

}