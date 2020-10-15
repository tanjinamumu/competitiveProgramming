#include<stdio.h>
int main()
{
    int i,j;
    for(i=5; i>=1; i--)
    {

        for(j=(5-i); j>=1; j--)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            if(j==1||i==5||j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



