#include<stdio.h>
int main()
{
	int t,i,j,a[20],max,min;
	scanf("%d",&t);
	printf("Lumberjacks:\n");
	while(t--)
	{
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		min=a[1];
		if(max>min)
		{
			j=0;
			for(i=0;i<9;i++)
			{
				if(a[i]>a[i+1])
				{
					j++;
				}
			}
		}
		else if(min>max)
		{
			j=0;
			for(i=0;i<9;i++)
			{
				if(a[i]<a[i+1])
				{
					j++;
				}
			}
		}
		if(j==9)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
	return 0;
}