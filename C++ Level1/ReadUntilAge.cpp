#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "please enter your age" << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    
    do 
    {
        Age = ReadAge();
    } while(!ValidateNumberInRange(Age, From, To));
}

int main () {

    
    return 0;
}