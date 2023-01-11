#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,rem,div,sum,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //n = rand()%10000+1;
        //cout<<n<<endl;
        sum=0;
        while (n > 0)
        {
            sum += (n % 10);
            n /= 10;
        }
        temp=sum;
        div=0;
        while(sum>0)
        {
            rem=sum%10;
            div=(div*10)+rem;
            sum=sum/10;
        }
        if(temp==div)
        {
            cout<<"Magic Digit!"<<endl;
        }
        else
        {
            cout<<"Candu Mia is a Failure!"<<endl;

        }
    }
    return 0;
}
