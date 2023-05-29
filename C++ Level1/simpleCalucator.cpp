#include <iostream>

using namespace std;

int main () {
    int num1, num2;
    string type;
    cout << "enter your first number\n";
    cin >> num1;
    cout << "enter you second number\n";
    cin >> num2;
    cout << "enter your operation type\n";
    cin >> type;

    if (type == "+"){
        cout << num1 + num2;
    } else if (type == "*") {
        cout << num1*num2;
    } else if (type == "-") {
        cout << num1 - num2;
    } else if (type == "/") {
        cout << num1 / num2;
    } else {
        cout << "wrong operator";
    }

    return 0;
}
