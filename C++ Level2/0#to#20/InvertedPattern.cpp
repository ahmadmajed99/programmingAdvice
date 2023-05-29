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

int ReverseNumber(int Number)
{
    int Remainder;
    int reversed_number = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        reversed_number = reversed_number*10 + Remainder;
        Number /= 10;
    }

    return reversed_number;
}

void PrintInverted(int Number)
{
    cout << "\n";
     
    for (int i=Number; i>=1; i--)
    {
        for (int j=1; j<= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}



int main() {

    PrintInverted(ReadPositiveNumber("please enter a positive number"));

    return 0; 

}