#include <iostream>
#include <string>

using namespace std;


void PrintWordsFromAAAtoZZZ()
{
    cout << "\n";

    for (int i=65; i<= 90; i++)
    {
        for (int j=65; j<= 90; j++)
        {
            for (int c=65; c<= 90; c++) 
            {
                cout << char(i);
                cout << char(j);
                cout << char(c);
                cout << "\n" ;
            }
        }
    }
}



int main() {

    PrintWordsFromAAAtoZZZ();

    return 0; 

}