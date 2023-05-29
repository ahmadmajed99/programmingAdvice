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

void ReverseDigits(int Number)
{
    int Remainder;
    int reversed_number = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        reversed_number = Remainder;
        Number /= 10;
        cout << reversed_number << endl;
    }

}


int main() {

    ReverseDigits(ReadPositiveNumber("please enter a positive number"));
    return 0;

}