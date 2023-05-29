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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Remainder;
    int FreqCount=0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    short DigitFrequency = 0;

    for (int i =0; i< 10; i++)
    {
        DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequencey is " << DigitFrequency << " Time(s).\n"; 
        }
    }
}

int main() { 

    int Number = ReadPositiveNumber("Please enter the main number?");   

    PrintAllDigitsFrequency(Number);

    return 0; 
}