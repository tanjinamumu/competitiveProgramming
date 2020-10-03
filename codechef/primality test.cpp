#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, i, flag = 0;
        cin>>n;
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (n == 1)
        {
            break;
        }
        else
        {
            if (flag == 0)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
