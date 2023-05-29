#include <iostream>

using namespace std;

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

int SumArray(int arr[100], int arrLength)
{
    int sum = 0;

    for (int i = 0; i <= arrLength-1; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i <= arrLength; i++)
    {
        arrDestination[i] = arrSource[i];
    }
}

int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100], arrLength;

    FillArrayWithRandomNumber(arr, arrLength);

    int arr2[100];
    CopyArray(arr, arr2, arrLength);

    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);

    cout << "Array 2 elements: ";
    PrintArray(arr2, arrLength);


    return 0;

}