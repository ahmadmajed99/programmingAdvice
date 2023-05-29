#include <iostream>

using namespace std;

void PrintHeaderTable() {
    cout << "\n\n\t\t\t Multiplication Table from 1 to 10\n\n";
    cout << "\t";
    for (int i=1; i<=10; i++) {
        cout << i << "\t";
    }
    cout << "\n_________________________________________________________________________________________\n";
}



int main () {
    PrintHeaderTable();

}