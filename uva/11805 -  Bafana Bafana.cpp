#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {

        int n, k, p;
        cin>>n>>k>>p;
        while (p--)
        {
            k++;
            if (k > n)
            {
                k = 1;
            }
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<k<<endl;
    }
    return 0;
}
