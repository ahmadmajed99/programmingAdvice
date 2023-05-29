#include <iostream>

using namespace std;

int main () {
    int num;
    int fact = 1 ;
   
    cout << "enter a number\n";
    cin >> num;

        for (int i=num+1; i=1; i--) {
            fact = fact * i;
        }
        cout << fact<<endl;
        return 0;
}
