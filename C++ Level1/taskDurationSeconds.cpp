#include <iostream>

using namespace std;

int main () {
    float days, hours, minutes, seconds;
    double output;
    cout << "enter number of days";
    cin >> days;
    cout << "enter number of hours";
    cin >> hours;
    cout << "enter number of minutes";
    cin >> minutes;
    cout << "enter number of seconds";
    cin >> seconds;

    output = seconds + days*24*3600 + hours*3600 + minutes*60;

    cout << "the number of seconds are: " << output ;
    
}
