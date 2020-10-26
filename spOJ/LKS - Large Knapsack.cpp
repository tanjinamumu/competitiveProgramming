#include <bits/stdc++.h>
using namespace std;

long long LKS(vector<long long>v, vector<long long>w, long long k )
{
    long long n = v.size();
    vector <long long> mat(k+1);
    for(long long i =0; i< n; i++)
    {
        for(long long j = k; j>= w[i]; j--)
        {
            mat[j] = max(mat[j], mat[j-w[i]]+v[i]);
        }
    }
    return mat[k];
}

int main()
{
    long long k,n;
    cin>>k>>n;
    vector<long long>v(n),w(n);
    for(long long i = 0; i < n; i++)
    {
        cin>>v[i]>>w[i];
    }
    cout<<LKS(v,w,k)<<endl;
    return 0;
}
