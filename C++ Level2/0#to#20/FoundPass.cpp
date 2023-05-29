#include <iostream>
#include <string>

using namespace std;


string ReadPassword()
{
    string password;

    cout << "please enter a 3 letters capital";

    cin >> password;

    return password;
}


bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trial [" << counter << "] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << counter ;
                    cout << word;
                    return true;
                }
                word = "";
            }
        };
    }

    return false;
};


int main() {

    string message;
    GuessPassword(ReadPassword());

    return 0; 

}