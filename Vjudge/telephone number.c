#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0;
        scanf("%d",&n);
        char s[50];
        scanf("%s",&s);
        for(i=0;i<n;i++)
        {
            if(s[i]!='8')count++;
            else break;

        }
        if(n-count>=11)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

