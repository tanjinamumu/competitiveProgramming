#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,mn,mx;
    cin>>a>>b;
    mn=min(a,b);
    mx=max(((a-mn)/2),((b-mn)/2));
    cout<<mn<<" "<<mx<<endl;
}
