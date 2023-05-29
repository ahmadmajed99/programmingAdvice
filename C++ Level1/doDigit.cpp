
// CPP program to find if number is
// a Special Two-Digit number or not
#include<bits/stdc++.h>
using namespace std;
 
// function to find if number
// is special or not
void specialNumber(int n)
{
    // Checking whether entered
    // number is 2 digit or not
    if (n < 10 || n > 99)
        cout << "Invalid Input! Number"
             << " should have 2 digits only";
    else
    {
        // Finding the first digit
        int first = n / 10;
         
        // Finding the last digit
        int last = n % 10;
         
        // Finding the sum of
        // the digits
        int sum = first + last;
         
        // Finding the product
        // of the digits
        int pro = first * last;
         
        if ((sum + pro) == n)
        {
            cout << n <<" is a Special "
                 << "Two-Digit Number";
        }
        else
        {
            cout << n << " is Not a "
                 << "Special Two-Digit Number";
        }
    }
}
 
// Driver Code
int main()
{
    int n = 2020;
     
    // function calling
    specialNumber(n);
    return 0;
}