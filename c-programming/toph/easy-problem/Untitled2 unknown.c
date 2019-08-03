#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("Enter the n i.e. max values of series: ");
	scanf("%d",&n);
	sum = pow(((n * (n + 1) ) / 2),2);
	printf("Sum of the series : ");

	return 0;
}
