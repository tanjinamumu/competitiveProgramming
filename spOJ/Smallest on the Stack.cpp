#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stk;
    multiset<int>mtk;
    int n,v,i;
    char s[10];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s", &s);
        if(s[2]=='S')
        {
            scanf("%d", &v);
            stk.push(v);
            mtk.insert(v);
        }
        else if(s[1]=='I')
        {
            if(stk.empty())
            {
                printf("EMPTY\n");
            }
            else
            {
                //cout<<*mtk.begin()<<endl<<endl;
                printf("%d\n", *mtk.begin());
            }
        }
        else if(s[1]=='O')
        {
            if(stk.empty())
            {
                printf("EMPTY\n");
            }
            else
            {
                int rev=stk.top();
                stk.pop();
                mtk.erase(mtk.find(rev));
            }
        }
    }
}
