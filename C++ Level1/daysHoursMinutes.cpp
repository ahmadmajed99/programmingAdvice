#include <iostream>
#include <math.h> 

using namespace std;

int main () {
    const int SecondsPerDay = 24*60*60;
    const int SecondsPerHours = 60*60;
    const int SecondsPerMinutes = 60;

    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, Remainder;

    int TotalSeconds;
    cout << "enter the total seconds: \n";
    cin >> TotalSeconds;

    NumberOfDays = floor(TotalSeconds/SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerHours;

    NumberOfHours = floor(Remainder / SecondsPerHours);
    Remainder = TotalSeconds % SecondsPerHours;

    NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
    Remainder = TotalSeconds % SecondsPerMinutes;

    NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << Remainder << endl ;

    return 0;
    
}
