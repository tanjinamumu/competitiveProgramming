#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    stack<int>stk;
    while(n--)
    {
        int t,v;
        scanf("%d", &t);
        if(t == 1)
        {
            scanf("%d", &v);
            stk.push(v);
        }
        else if(t == 2)
        {
            if(!stk.empty())
            {
                stk.pop();
            }
        }
        else
        {
            if(stk.empty())
            {
                printf("Empty!\n");
            }
            else
            {
                printf("%d\n", stk.top());
            }
        }
    }
    return 0;
}
