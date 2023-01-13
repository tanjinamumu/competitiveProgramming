#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        long long int num, mod;
    
        cin>>num;
        int cnt=0;
        while(num > 0) 
        {
            mod = num % 10;  
    
            num = num / 10;
            if(mod==7)
            {
                //cout<<"YES"<<endl;
                cnt = 1;
            }
            
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
