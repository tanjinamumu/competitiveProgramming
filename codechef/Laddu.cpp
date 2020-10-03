#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int activities,Bonus;
        string origin;
        cin>>activities>>origin;
        Bonus=0;
        for(int i=0;i<activities;i++)
        {
            string types;
            cin>>types;
            if(types=="CONTEST_WON")
            {
                int Rank;
                cin>>Rank;
                Bonus+=300;
                if(Rank<=20)
                {
                    Bonus+=20-Rank;
                }
            }
            else if(types=="TOP_CONTRIBUTOR")
            {
                Bonus+=300;
            }
            else if(types=="BUG_FOUND")
            {
                int severity;
                cin>>severity;
                Bonus+=severity;
            }
            else if(types=="CONTEST_HOSTED")
            {
                Bonus+=50;
            }
            /*else
            {
                this will not happen
            }*/
        }
        int months;
        if(origin=="INDIAN")
        {
            cout<<Bonus/200<<endl;
        }
        else
        {
            cout<<Bonus/400<<endl;
        }
    }
    return 0;
}
