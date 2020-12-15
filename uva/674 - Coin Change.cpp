#include<bits/stdc++.h>
using namespace std;

#define cents 8010
#define coin 5
int a[cents] = {1, 1, 1, 1, 1}; //all are 1

int main()
{
    int i,n;
    for(i=coin; i<cents; i++) //starting from 5
    {
        a[i] += a[i-1];
    }
    for(i=5; i<cents; i++)
    {
        a[i] += a[i-5];
    }
    for(i=10; i<cents; i++)
    {
        a[i] += a[i-10];
    }
    for(i=25; i<cents; i++)
    {
        a[i] += a[i-25];
    }
    for(i=50; i<cents; i++)
    {
        a[i] += a[i-50];
    }
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}

