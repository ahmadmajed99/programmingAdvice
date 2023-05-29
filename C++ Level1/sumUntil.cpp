#include <iostream>

using namespace std;

int main () {
    int num;
    int add=0;

    while(num != -99) {
        add = add + num;
        cout << "enter a number\n";
        cin >> num;
    }
    cout << "the sum of this number are:\n" + add  ;
    return 0;
}
