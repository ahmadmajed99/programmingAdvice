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

void SumOfDigits(int Number)
{
    int Remainder = 0;
    int Add = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Add += Remainder;
    }
    cout << Add << endl;
}


int main() {

    SumOfDigits(ReadPositiveNumber("please enter a positive number"));
    return 0;

}