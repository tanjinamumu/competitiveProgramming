#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,k,power,it;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        vector<int>ans;
        power = 1;
        while (n > 0)
        {
            //cout << "line 14 ok"<< n << endl;
            if (n % 10 > 0)
            {
                k=((n % 10) * power);
                //cout <<"line 18 ok"<< k << endl;
                ans.push_back(k);
            }
            n /= 10;
            //cout <<"line 22 ok"<<  n << endl;
            power *= 10;
            //cout<<"line 24 ok"<< power<<endl;
        }
        cout << ans.size() << endl;
        for(auto it :ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
