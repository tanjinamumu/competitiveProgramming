#include<stdio.h>
int main()
{
    int v, t, distance;
    printf("Enter the value of v and t: ");
    scanf("%d %d", &v, &t);
    distance= 2 * t * v;
    printf("At 2t,Distance is: %d\n", distance);
    return 0;
}
