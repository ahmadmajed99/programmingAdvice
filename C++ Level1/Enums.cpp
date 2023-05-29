#include <iostream>

using namespace std;

enum Color {Green, Red, Yellow, Blue};
enum Direction {North, South, East, West};
enum Week {Sat, Sun, Mon, Tue, Wed, Thu, Fri};
enum Gendor {Male, Female};
enum Status {Single, Married};

int main () {
    Color MyColor;
    Direction MyDirection;
    Week MyWeek;
    Gendor MyGendor;
    Status MyStatus;
    
    MyColor = Color::Yellow;

    cout << "MY color is:" << MyColor << endl;

    return 0;   
}
