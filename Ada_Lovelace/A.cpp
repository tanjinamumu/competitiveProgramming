#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j;
    long long int n,m,a[100005],b[100005],ans,c,f;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b,b+m,greater<long long int>());
        c=0,f=0;
        for(i=0;i<m;i++){
                if(i==n){
                    break;
                }
                if(b[i]>=a[i]){
                    c++;
                }


        }
        long long int r=0,s=0;
        for(i=0;i<c;i++){
            r+=b[i];
            s+=a[i];
        }
        cout<<r-s<<endl;
    }



    return 0;
}
