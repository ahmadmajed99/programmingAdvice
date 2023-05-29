#include <iostream>

using namespace std;

int main () {
    int num;

    cout << "enter a number\n";
    cin >> num;

    while (num < 0) {
        cout << "number must be positive\n";
        cin >> num;
    }
    if (num%2 == 0) {
    cout << "not prime\n";
    } else {
    cout << "prime\n";
    } 
    return 0;
}