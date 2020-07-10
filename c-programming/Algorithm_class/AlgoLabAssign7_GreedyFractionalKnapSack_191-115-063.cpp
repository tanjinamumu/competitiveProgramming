//ID:191-115-063
//name: Tanjina Ahmed Mumu
//fractional knapsack implementation assignment.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double items, total_weight, result=0, sum, price, weight;
    string name;
    vector<pair<double,pair<int,pair<int,string>>>>add;
    vector<string>s[2];
    cin>>items>>total_weight;
    while(items--)
    {
        cin>>name>>price>>weight;
        double ppw=price/float(weight);
        add.push_back({ppw, {price, {weight, name}}});
    }
    sort(add.begin(), add.end());
    reverse(add.begin(), add.end());
    for(auto i: add)
    {
        if(i.second.second.first<=total_weight)
        {
            total_weight-=i.second.second.first;
            //cout<<"ok27"<<" "<<total_weight<<endl;
            result+=i.second.first;
            //cout<<"ok29"<<" "<<result<<endl;
            s[1].push_back(i.second.second.second);
        }
        else
        {
            s[0].push_back(i.second.second.second);
            sum = total_weight/float(i.second.second.first);
           //cout<<"ok36"<<" "<<sum<<endl;
            result+=(sum*i.second.first);
            //cout<<"ok38"<<" "<<result<<endl;
            break;
        }
    }
    cout<<fixed<<setprecision(3)<<"Total price achieved"<<":"<<" "<<result<<endl;
    cout<<"List of selected items"<<endl;
    for(auto i: s[1])
    {
        cout<<i<<" "<<"taken with a fraction of 1"<<endl;
    }
    if(s[0].size())
    {
        cout<<fixed<<setprecision(6)<<s[0].back()<<" "<<"taken with a fraction of"<<" "<<sum<<endl;
    }
}
