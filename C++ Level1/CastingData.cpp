#include <iostream>
#include <string.h>

using namespace std;

int main () {
    string S1, S2, S3;


    cout << "please enter String1" << endl;;
    getline(cin, S1);

    cout << "please enter String2" << endl;
    cin >> S2;

    cout << "please enter String3" << endl;
    cin >> S3;

    cout << "\n******************\n";

    cout << "the length of string1 is: " << S1.length() << endl ;
    cout << "characters at 0,2,4,7 are: " << S1[0] << S1[2] << S1[4] << S1[7] << endl;
    cout << "concatenating String2 and String3= "  << S2 + S3 << endl;
    cout << "5*10= " << stoi(S2)*stoi(S3);

    return 0;
}
