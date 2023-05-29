#include <iostream>

using namespace std;

void swap(int &A, int &B) {

    int Temp;
    Temp = A;
    A = B;
    B = Temp;
    cout << "swap inside the function" << "A= " << A << " B= " << B << endl;

}

int main () {

    int A;
    int B;

    cout << "enter N1" << endl;
    cin >> A;

    cout << "enter N2" << endl;
    cin >> B;

    cout << "swap before function" << "A= " << A << " B= " << B << endl;
    swap(A, B);
    cout << "swap inside main" << "A= " << A << " B= " << B << endl;\

    return 0;
    
}