#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char s;
        cin>>s;
        //for()
        if(s=='B'|| s=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(s=='C'|| s=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(s=='D'|| s=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(s=='F'|| s=='f')
        {
            cout<<"Frigate"<<endl;
        }
    }
    return 0;

}
