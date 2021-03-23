#include<stdio.h>
int main()
{
    int size,elements[10],i;
    printf("size is: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        scanf("%d",&elements[i]);
    }
    for(i=1;i<=size;i++)
    {
        printf("In index %d element is %d\n",i,elements[i]);
    }
    return 0;
}
