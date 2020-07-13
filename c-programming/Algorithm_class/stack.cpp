/*
A stack has pretty much all the methods of a queue, including push(), pop(), size(), empty().
However, instead of front(), a stack accesses the top of the stack with top(). And of course, pop()
will retrive the element at the top (or end) of the stack, not the front.
*/

#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main()
{
    stack<int> stk; // Construct an empty stack
    for (int i = 0; i < 5; i++)
    {
        cout << i+2 << " ";
        stk.push(i + 2); // Pushes i to the end of the stack
    }
    cout << endl;

    /*
    currently the stack is:

    5 --> top
    4
    3
    2
    1 --> bottom

    */

    int sz = stk.size(); // Size of stack is 5
    cout << "Current size of the stack is: " << sz << endl;
    cout << "Current top: " << stk.top() << endl;
    getchar();

    while (!stk.empty())
    {                              // Print until stk is empty
        int lastFront = stk.top(); // Retrieve the front of the stack
        stk.pop();                 // REMEMBER to remove the element!
        cout << lastFront << " "; // Prints stack line by line
        getchar();
    }
    cout << endl;

    stk.push(-1);

    getchar();
    cout << "Current top: " << stk.top() << endl;
    cout << "Current size of the stack is: " << (int)stk.size() << endl;

    getchar();

    stk.pop();

    getchar();
    if (stk.empty())
    {
        cout << "Currently stack is empty." << endl;
    }
    else
    {
        sz = stk.size();
        cout << "Current size of the stack is: " << sz << endl;
    }
    return 0;
}
