#include<stdio.h>
int main()
{
    int i, j;
    for(j=0; j<5; j=j+1)
    {
        for(i=0; i<j+1; i=i+1)
            {
                printf("*");
            }

        printf("\n");
    }

    return 0;
}
