#include<stdio.h>
int main()
{
   int i,j,n,m,count=0;
   int z;

   scanf("%d %d %d",&n,&m,&z);
   for(i=1;;i++)
   {
       j=m*i;
       if(j>z)
       {
            break;
       }

       if(j%n==0)
       {
           count++;
       }

   }
   printf("%d\n",count);

}
