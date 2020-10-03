#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int n=0,sum=0;
	scanf("%lld",&n);
	if (n>=100)
    {
        sum=sum+(n/100);
        n=n-n/100*100;
    }
    if (n>=20)
    {
        sum+=n/20;
        n=n-n/20*20;
    }
	if (n>=10)
    {
        sum=sum+(n/10);
        n=n-n/10*10;
    }
	 if (n>=5)
    {
        sum=sum+(n/5);
        n=n-n/5*5;
    }
	if (n>=1)
    {
        sum=sum+(n/1);
    }
	printf("%lld\n",sum);

	return 0;

}
