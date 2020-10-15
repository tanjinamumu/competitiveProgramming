#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=9; i++)
    {
        if(i == 5)
        {
            for(j=1; j<=9; j++)
            {
                printf("+");
            }
        }
        else
        {
            for(j=1; j<=4; j++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }

    return 0;
}
