#include<stdio.h>
#include<string.h>
int main()
{

    char s[10];
    int i=0;
    while(scanf("%s",&s))
    {
        if(!strcmp(s,"*"))
        {
            break;
        }
        else if(!strcmp(s,"Hajj"))
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
    }
    return 0;
}
