#include <stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
	int n,t,gp,gn,i,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    gp=0;
	    gn=0;
	    for(i=0;i<n;++i)
	    {
	        scanf("%d",&x);
	        if(x>=0)
	            ++gp;
	        else
	            ++gn;
	    }

	    if(gp>0)
	        printf("%d ",gp);
	   else
	        printf("%d ",gn);

	    if(gn>0)
	        printf("%d\n",gn);
	   else
	        printf("%d\n",gp);

	}
	return 0;
}



