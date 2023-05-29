#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info; 
    cout << "please enter your first name";
    cin >> Info.FirstName;

    cout << "please enter your last name";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info, bool Reversed) 
{
    string FullName;
    if (Reversed)
       FullName = Info.LastName + ' ' + Info.FirstName;
    else
        FullName = Info.FirstName + ' ' + Info.LastName;

    return FullName;
};

void PrintFullName (string FullName)
{
    cout << FullName << endl;
}


int main () {

    PrintFullName(GetFullName(ReadInfo(), true));
    
    return 0;
}