#include<stdio.h>
int main()
{
    int arr[2][3];
    int i, j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Two Dimensional array elements are:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
