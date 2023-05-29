#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
    
}


void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nenter number of elements: \n" ;
    cin >> arrLength;

    for(int i = 0; i <= arrLength-1; i++)
    {
        cout << "Element[" << i + 1 << "] :";
        cin >> arr[i];
    }

    cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0 ; i <= arrLength-1; i++)
    {
        cout << arr[i] << " ";
    }
}

int TimesRepeated(int Number, int arr[100],int arrLength)
{
    int count=0;

    for (int i = 0 ; i <= arrLength; i++)
    {
        if (Number == arr[i])
        count++;
    }

    return count;
}

int main()
{
    int arr[100], arrLength, NumberToCheck;

    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("enter the number you want to check: ");

    cout << "\nyour original array\n";

    PrintArray(arr, arrLength);

    cout << "\nNumber " << NumberToCheck;
    cout << " repeated " << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";
}