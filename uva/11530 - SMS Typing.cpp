#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    char ss[100];
    cin>>t;
    gets(ss);
    while(t--)
    {
        char s[200];
        gets(s);
        int l=strlen(s);
        int j,sp=0;
        for(j=0;j<l;j++)
        {
            if(s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'||s[j]==' ')
            {
                sp+=1;
            }
            else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')
            {
                sp+=2;
            }
            else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y')
            {
                sp+=3;
            }
            else if(s[j]=='s'||s[j]=='z')
            {
                sp+=4;
            }
        }
        count++;
        cout<<"Case #"<<count<<": "<<sp<<endl;
    }
    return 0;
}
