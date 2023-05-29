#include <iostream>

using namespace std;

int main () {
    float totalBill;
    float cashBill;
    float Remainder;
    cout << "Enter your totalBill\n";
    cin >> totalBill;
    cout << "enter You cashBill\n";
    cin >> cashBill;

    if ( totalBill> 0 || cashBill>0 ) {
        Remainder = totalBill - cashBill;
        cout << Remainder;
    }
    return 0;
}