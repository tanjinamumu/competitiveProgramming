#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char ch[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&ch);
        if(strlen(ch)==5)
        {
            printf("3\n");
        }
        else if((ch[0]=='t' && ch[1]=='w')||(ch[0]=='t' && ch[2]=='o')||(ch[1]=='w' && ch[2]=='o'))
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }

    }
    return 0;
}
