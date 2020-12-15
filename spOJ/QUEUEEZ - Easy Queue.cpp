<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    queue<int> queuee;
    while(t--)
    {
        int x;
        scanf("%d", &x);
        if(x == 1)
        {
            scanf("%d", &x);
            queuee.push(x);
        }
        else if(x == 2)
        {
            if(!queuee.empty())
                queuee.pop();
        }
        else
        {
            if(queuee.empty())
            {
                printf("Empty!\n");
            }
            else
            {
                printf("%d\n", queuee.front());
            }
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    queue<int> queuee;
    while(t--)
    {
        int x;
        scanf("%d", &x);
        if(x == 1)
        {
            scanf("%d", &x);
            queuee.push(x);
        }
        else if(x == 2)
        {
            if(!queuee.empty())
                queuee.pop();
        }
        else
        {
            if(queuee.empty())
            {
                printf("Empty!\n");
            }
            else
            {
                printf("%d\n", queuee.front());
            }
        }
    }
    return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
