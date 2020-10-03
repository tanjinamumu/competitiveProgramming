#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y,iadd,isub;
    float a,b,fadd,fsub;
    scanf("%d %d", &x, &y);
    iadd=x+y;
    isub=x-y;
    printf("%d %d\n", iadd,isub);
    scanf("%f %f", &a, &b);
    fadd=a+b;
    fsub=a-b;
    printf("%.1f %.1f", fadd,fsub);
    return 0;
}

