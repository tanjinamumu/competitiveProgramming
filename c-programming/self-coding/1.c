#include <stdio.h>
int main ()
{
    int a,b,sum;

    printf("The value A is: ");

    scanf("%d", &a);

    printf("The value B is: ");

    scanf("%d", &b);

    sum = a + b;

    printf("A: %d + B: %d = Sum: %d",a,b,sum);

    return 0;
}
