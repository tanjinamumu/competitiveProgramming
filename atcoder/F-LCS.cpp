#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.size();
    int len2=s2.size();
    int mat[len1+1][len2+1];
    for(int i=0; i<=len1; i++)
    {
        for(int j=0; j<=len2; j++)
        {
            if(i==0||j==0)
            {
                mat[i][j]=0;
                continue;
            }
            else if(s1[i-1]==s2[j-1])
            {
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else
            {
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    string str;
    int i=len1,j=len2;
    int len=mat[len1][len2];
    while(len>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            str.push_back(s1[i-1]);
            i--;
            j--;
            len--;
        }
        else if(mat[i-1][j]>mat[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
