#include <iostream>
#include <stack>

using namespace std;


int main()
{

    // Create stack od ints
    stack <int> stkNumbers;

    // push into stack
    stkNumbers.push(10);
    stkNumbers.push(20);
    stkNumbers.push(30);
    stkNumbers.push(40);
    stkNumbers.push(50);

    // we can get the element by getting the top and popping
    // until the stack is empty
    cout << "count= " << stkNumbers.size() << endl;

    cout << "Numbers are: \n";
    while (!stkNumbers.empty())
    {
        cout << stkNumbers.top() << endl;

        // pop top element from the stack

        stkNumbers.pop();
    }

    system("pause>0");

    return 0;

}