#include<stdio.h>
int main()
{
    int maths[5]={76,63,94,67,100};
    int i,roll,marks;
    for(i=1;i<=5;i++)
    {
        printf("Roll: %d ; Marks: %d\n",i,maths[i-1]);
    }
    return 0;
}


