<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define MAX 400
int main()
{
    int top=-1,n;
    char stack[MAX];
    string s;

    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==')')
            {
               while(stack[top]!='(')
                {
                    cout<<stack[top];
                    top-=1;
                }
                top-=1;
            }
            else
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    cout<<s[i];
                }
                else
                {
                    top+=1;
                    stack[top]=s[i];
                }
            }
        }
        cout<<endl;
    }
     return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
#define MAX 400
int main()
{
    int top=-1,n;
    char stack[MAX];
    string s;

    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==')')
            {
               while(stack[top]!='(')
                {
                    cout<<stack[top];
                    top-=1;
                }
                top-=1;
            }
            else
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    cout<<s[i];
                }
                else
                {
                    top+=1;
                    stack[top]=s[i];
                }
            }
        }
        cout<<endl;
    }
     return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
