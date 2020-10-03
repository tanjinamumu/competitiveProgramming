#include <stdio.h>
#include <string.h>

int main()
{
    int t,sum=0,i;
    char s[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        if(!strcmp(s,"donate"))
        {
            scanf("%d",&i);
            sum+=i;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
