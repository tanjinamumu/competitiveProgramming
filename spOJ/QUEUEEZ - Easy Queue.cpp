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
