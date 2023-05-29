#include <iostream>

using namespace std;

int main () {
    int numberOfHours;
    cout << "enter number of hours\n";
    cin >> numberOfHours;
    float weeks;
    float days;
    days = numberOfHours/24;
    weeks = numberOfHours/7;
    cout << days << "days" << endl ;
    cout << weeks << "weeks" << endl;
    
}
