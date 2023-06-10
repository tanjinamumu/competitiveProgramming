#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,a,ans;
    scanf("%d",&t);
    for(a=1; a<=t; a++)
    {
        string s={};
        char ss;
        while(scanf("%c %d",&ss,&n)==2)
        {
            for(i=0; i<n; i++)
            {
                s+=ss;
            }
        }
        printf("Case %d: %s",&a,&s);
    }
}
