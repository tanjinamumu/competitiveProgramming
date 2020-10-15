#include <iostream>
using namespace std;
long long Max(long long a[],int n)
{
    long long max;
    max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
            max =a[i];
    }
    return max;
}

long long Min(long long a[],int n)
{
    long long min;
    min = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
            min =a[i];
    }
    return min;
}
int main()
{
    long long n, max, min,X,x;
    cin>>n;
    long long b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    max = Max(b,n);
    min = Min(b,n);

    cout<<"Maximum element in the array is:" << max << "\n";
    cout<<"Minimum element in the array is:" << min << "\n";

    if(max==min)
    {
        break;
    }
    else
    {
       X=max-min;
    }
    X=max;
    x=min;

    return 0;
}
