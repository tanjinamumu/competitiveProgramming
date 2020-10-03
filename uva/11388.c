#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,g,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&g,&l);
        if(l%g==0)
        {
            printf("%d %d\n",g,l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
