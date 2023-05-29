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

int MinNumberInArray(int arr[100], int arrLength)
{
    int min = arr[0];

    for (int i = 0; i <= arrLength-1; i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    srand((unsigned)time(NULL)); 

    int arr[100], arrLength;

    FillArrayWithRandomNumber(arr, arrLength);

    cout << "Array Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nMin number: ";
    cout << MinNumberInArray(arr, arrLength) << endl;

    return 0;

}