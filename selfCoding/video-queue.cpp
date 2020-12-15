<<<<<<< HEAD
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    queue<int> q; // Construct an empty queue
    for (int i = 0; i < 5; i++)
    {
        cout << i+2 << " ";
        q.push(i + 2); // Pushes i+2 to the end of the queue
    }
    getchar();
    // Q is now { 2, 3, 4, 5, 6 }
    cout << "First element in Queue: " << q.front() << "\n";
    cout << "Last element in Queue: " << q.back() << "\n";

    int sz = q.size(); // Size of queue is 5
    cout << "Current size of the queue is: " << sz << endl;
    getchar();

    cout << "q :  " << endl;
    while (!q.empty())
    {                              // Print until Q is empty
        int lastFront = q.front(); // Retrieve the front of the queue
        q.pop();                   // REMEMBER to remove the element!
        cout << lastFront << " "; // Prints queue line by line
        cout << "Current size of the queue is: " << q.size() << endl;
        getchar();
    }
    cout << endl;

    q.push(-1);
    getchar();
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    getchar();
    q.pop();

    getchar();
    if (q.empty())
    {
        cout << "Currently queue is empty." << endl;
    }
    else
    {
        sz = q.size();
        cout << "Current size of the queue is: " << sz << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    queue<int> q; // Construct an empty queue
    for (int i = 0; i < 5; i++)
    {
        cout << i+2 << " ";
        q.push(i + 2); // Pushes i+2 to the end of the queue
    }
    getchar();
    // Q is now { 2, 3, 4, 5, 6 }
    cout << "First element in Queue: " << q.front() << "\n";
    cout << "Last element in Queue: " << q.back() << "\n";

    int sz = q.size(); // Size of queue is 5
    cout << "Current size of the queue is: " << sz << endl;
    getchar();

    cout << "q :  " << endl;
    while (!q.empty())
    {                              // Print until Q is empty
        int lastFront = q.front(); // Retrieve the front of the queue
        q.pop();                   // REMEMBER to remove the element!
        cout << lastFront << " "; // Prints queue line by line
        cout << "Current size of the queue is: " << q.size() << endl;
        getchar();
    }
    cout << endl;

    q.push(-1);
    getchar();
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    getchar();
    q.pop();

    getchar();
    if (q.empty())
    {
        cout << "Currently queue is empty." << endl;
    }
    else
    {
        sz = q.size();
        cout << "Current size of the queue is: " << sz << endl;
    }
    return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
