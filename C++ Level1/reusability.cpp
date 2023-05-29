#include <iostream>
#include <string>

using namespace std;

struct strInfo {

    string Name;
    int Age;
    string City;
    string Country;;
    string MonthlySalary;
    string YearlySalary;
    string Gender;
    int Married;
};

void ReadInfo(strInfo Info) 
{
    cout << "Enter your Name?\n";
    cin >> Info.Name ;

    cout << "Enter your Age?\n";
    cin >> Info.Age;

    cout << "Enter your Country?\n";
    cin >> Info.Country;

    cout << "Enter your Monthly Salary?\n";
    cin >> Info.MonthlySalary;

    cout << "Enter your Yearly Salary?\n";
    cin >> Info.YearlySalary;

    cout << "Enter your Yearly Gender?\n";
    cin >> Info.Gender; 

    cout << "Your are Married?\n";
    cin >> Info.Married;    

}

void PrintInfo(strInfo Info) 
{
    cout << "\n****************************\n" << endl;

    cout << "Name: " << Info.Name << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "Monthly Salary: " << Info.MonthlySalary << endl;
    cout << "Yearly Salary: " << Info.YearlySalary << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Married: " << Info.Married << endl;
    
    cout << "\n****************************\n" << endl;
}

int main () {

    strInfo PersonInfo;
    ReadInfo (PersonInfo);
    PrintInfo (PersonInfo);

    return 0;
}