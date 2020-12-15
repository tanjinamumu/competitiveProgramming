<<<<<<< HEAD
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
=======
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
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
