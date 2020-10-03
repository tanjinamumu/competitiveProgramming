#include<stdio.h>
int main()
{
    int i, j;
    for(j=5; j>=1; j=j-1)
    {
        for(i=1; i<j+1; i=i+1)
            {
                printf("*");
            }

        printf("\n");
    }

    return 0;
}

