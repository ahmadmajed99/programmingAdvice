#include <iostream>

using namespace std;

enum enWeekDay {
    Sun = 1 ,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
} ;

void ShowWeekDayMenu () {
    cout << "***************************"<< endl;
    cout << "      Week Days            "<< endl;

};

enWeekDay ReadWeekDay() {
    
    enWeekDay WeekDay;
    int wd;
    cin >> wd;

    return (enWeekDay) wd;
};

string GetWeekDayName (enWeekDay WeekDay) {
    switch (WeekDay)
    {
    case enWeekDay::Sun:
    return "Sunday";
    break;

    case enWeekDay::Mon:
    return "Monday";
    break;

    case enWeekDay::Tue:
    return "Tuedsay";
    break;   
    
    default:
        break;
    }
};


int main () {

    ShowWeekDayMenu();
    cout << "today is" <<  GetWeekDayName(ReadWeekDay());
}