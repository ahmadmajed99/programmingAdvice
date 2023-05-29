#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "\n enter your first number" << endl;
    cin >> Num1;

    cout << "\n enter your second number" << endl;
    cin >> Num2;
}

int MaxOfTwoNumbers(int Num1, int Num2)
{
    if (Num1 > Num2)
    return Num1;
    else 
    return Num2;
}

void PrintResult(int Max)
{
    cout << "the max number is: " << Max << endl;
}

int main () {

    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(MaxOfTwoNumbers(Num1, Num2));
    return 0;
}