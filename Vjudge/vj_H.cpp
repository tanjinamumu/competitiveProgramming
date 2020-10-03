#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long A[n];
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }
    for(int i=n; i>=1; i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
