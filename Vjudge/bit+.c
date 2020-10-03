#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int n,sum=0;
    char X[5];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&X);
        if((strcmp(X,"X++")==0)||(strcmp(X,"++X")==0))
        {
           sum+=1;
        }
        else if((strcmp(X,"X--")==0)||(strcmp(X,"--X")==0))
        {
            sum-=1;
        }
        sum=sum;
    }
    printf("%d\n",sum);
    return 0;
}
