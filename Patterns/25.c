#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<5; i++)
    {
        for(j=1; j<=(5-i); j++)
        {
            printf(" ");
        }
        for(j=i; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
