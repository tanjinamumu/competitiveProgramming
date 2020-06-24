#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,ts;
        double c;
        cin>>h>>c>>ts;
        //Hardness must be greater than 50.
        //Carbon content must be less than 0.7.
        //Tensile strength must be greater than 5600.

        //Grade is 10 if all three conditions are met.
        //Grade is 9 if conditions (i) and (ii) are met.
        //Grade is 8 if conditions (ii) and (iii) are met.
        //Grade is 7 if conditions (i) and (iii) are met.
        //Garde is 6 if only one condition is met.
        //Grade is 5 if none of three conditions are met.
        if((h>50)&&(c<0.7)&&(ts>5600))
        {
            cout<<"10"<<endl;
        }
        else if((h>50)&&(c<0.7))
        {
            cout<<"9"<<endl;
        }
        else if((c<0.7)&&(ts>5600))
        {
            cout<<"8"<<endl;
        }
        else if((h>50)&&(ts>5600))
        {
            cout<<"7"<<endl;
        }
        else if((h>50)||(c<0.7)||(ts>5600))
        {
            cout<<"6"<<endl;
        }
        else
        {
            cout<<"5"<<endl;
        }
    }
    return 0;
}
