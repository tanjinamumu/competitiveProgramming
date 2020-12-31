#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(1)
    {
        n++;
        int x=n;
        set<int>st;
        while(x)
        {
            st.insert(x%10);
            x/=10;
        }
        if(st.size()==4)
        {
            cout<<n<<endl;
            return 0;
        }
    }
    return 0;
}

