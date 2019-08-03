#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a;
        scanf("%d", &a);
        if(a%2==0)
        {
            printf("Bangla\n");
        }
        else if(a==1971)
        {
            printf("Joy Bangla\n");
        }
        else
        {
            printf("Joy\n");
        }
    }
}
