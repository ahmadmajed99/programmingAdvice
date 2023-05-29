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

int SumNumberInArray(int arr[100], int arrLength)
{
    int sum = 0;

    for (int i = 0; i <= arrLength-1; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100], arrLength;

    FillArrayWithRandomNumber(arr, arrLength);

    cout << "Array Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nSum number: ";
    cout << SumNumberInArray(arr, arrLength) << endl;

    return 0;

}