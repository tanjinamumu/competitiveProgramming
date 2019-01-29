#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,add,sub,mul1,mul2,div1,div2,tenth_num;
        scanf("%d", &n);
        mul1=n*567;
        div1=mul1/9;
        add=div1+7492;
        mul2=add*235;
        div2=mul2/47;
        sub=div2-498;
        tenth_num =abs((sub%100)/10);
        printf("%d\n",tenth_num);
    }
    return 0;
}


