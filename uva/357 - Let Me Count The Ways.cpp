<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

#define sz 30001

unsigned long long cents[30001];
int coin[] = {1, 5, 10, 25, 50};

int main()
{
    int n;
    cents[0] = 1;
    for (int i=0; i<5; i++)
    {
        for (int j=coin[i]; j<sz; j++)
        {
            cents[j] += cents[j - coin[i]];
        }
    }

    while(cin>>n)
    {
        if (cents[n] == 1)
        {
            cout<<"There is only "<<"1"<<" way to produce "<<n<<" cents change."<<endl;
        }
        else
        {
            cout<<"There are "<<cents[n]<<" ways to produce "<<n<<" cents change."<<endl;
        }
    }
}
=======
#include<bits/stdc++.h>
using namespace std;

#define sz 30001

unsigned long long cents[30001];
int coin[] = {1, 5, 10, 25, 50};

int main()
{
    int n;
    cents[0] = 1;
    for (int i=0; i<5; i++)
    {
        for (int j=coin[i]; j<sz; j++)
        {
            cents[j] += cents[j - coin[i]];
        }
    }

    while(cin>>n)
    {
        if (cents[n] == 1)
        {
            cout<<"There is only "<<"1"<<" way to produce "<<n<<" cents change."<<endl;
        }
        else
        {
            cout<<"There are "<<cents[n]<<" ways to produce "<<n<<" cents change."<<endl;
        }
    }
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
