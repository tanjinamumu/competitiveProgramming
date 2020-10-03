#include<stdio.h>
int main()
{
    int t,x,y,z,R;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        R=z*(x+(x-y))/(x+y);
        if(R<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",R);
        }
    }
    return 0;
}
