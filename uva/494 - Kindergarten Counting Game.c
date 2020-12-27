#include<stdio.h>
#include<string.h>
int main()
{
    char s[10005];
    int i,l,cnt;
    while(gets(s))
    {
        l=strlen(s);
        cnt=0;
        for(i=0;i<l;i++)
        {
            if((isalpha(s[i]))&&(!isalpha(s[i+1])))
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

