#include<stdio.h>
#include<string.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
   int i;
   char s[100];
   gets(s);
   for(i=0;i<strlen(s);i++)
   {
       if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
       {
           printf("YES\n");
           return 0;
       }
   }
   printf("NO\n");
   return 0;

}
