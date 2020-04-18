#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,np;
    cin>>t;
    while(t--)
    {
        cin>>np;
        int nop[np],sp[np],flag=0;
        for(i=0; i<np; i++)
        {
            cin>>nop[i];
        }
        int j=0;
        for(i=0; i<np; i++)
        {
            if(nop[i]==1)
            {
                //cout<<"nop"<<"["<<i<<"]"<<" "<<nop[i]<<endl;
                sp[j]=i;
                j++;
            }
        }
        for(i=1; i<j; i++)
        {
            n=sp[i]-sp[i-1];
            if(n<6)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    //cout<<n<<endl;
    return 0;
}
