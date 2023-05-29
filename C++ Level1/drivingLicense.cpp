#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age";
    cin >> Info.Age;

    cout << "Do you have a driver license?";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have a recommendation?";
    cin >> Info.HasRecommendation;

    return Info;
};

bool IsAccepted(stInfo Info) 
{
    if (Info.HasRecommendation) 
    {
        return true;
    }
    else 
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
};

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
       cout << "\n Hired \n"<< endl;
    else 
       cout << "\n Rejected \n"<< endl;
};

int main () 
{

    PrintResult(ReadInfo());
    
    return 0;
}