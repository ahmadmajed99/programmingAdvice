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

bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}


int main() {

    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))         
        cout << "\nYes , it is a Palindrome number.\n"; 
    else        
        cout << "\nNo , it is NOT a Palindrome number.\n"; 

    return 0; 

}