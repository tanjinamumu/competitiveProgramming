#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>seqList[n];
    int last_ans=0;
    for(int i=0;i<q;i++)
    {
        int query, x, y;
        cin>>query>>x>>y;
        int position=(x^last_ans)%n;
        if(query==1)
        {
            seqList[position].push_back(y);
        }
        else if(query==2)
        {
            int index = y%((int)seqList[position].size());
            last_ans = seqList[position][index];
            cout<<last_ans<<endl;
        }
    }
    return 0;
}

