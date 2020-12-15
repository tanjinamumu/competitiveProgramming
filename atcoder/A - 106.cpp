<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,i,j;
    cin>>n;
    for (x=3, i=1; x<=n; x*=3, i++)
    {
       for(y=5, j=1; y<=n; y*=5, j++)
        {
            if ((x+y)==n)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,i,j;
    cin>>n;
    for (x=3, i=1; x<=n; x*=3, i++)
    {
       for(y=5, j=1; y<=n; y*=5, j++)
        {
            if ((x+y)==n)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
