#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,i,n1,n2,n3,n4,n5,n6,b,m1,m2,m3,m4,m5,m6,sum1=0,sum2=0,result;
    scanf("%d",&t);
    //mojaaaa
    for(i=1;i<=t;i++)
    {
       scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
       sum1=n1+n2+n3+n4+n5+n6;
       scanf("%d",&b);
       scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
       sum2=m1+m2+m3+m4+m5+m6;
       result=sum2-(b-sum1);
       if(result<0)
       result=0;
       printf("Case %d: %d\n",i,result);
    }
}
