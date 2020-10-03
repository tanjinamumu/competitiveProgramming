#include <stdio.h>

int main ()
{
    int i, j, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int sum = 0, number, average = 0, how_many_numbers;
        scanf("%d", &how_many_numbers);
        for(j = 0; j < how_many_numbers; j++)
        {
            scanf("%d", &number);
            sum += number;
        }
        average = (int) sum/how_many_numbers;
        printf("Case %d: %d\n", i+1, average);
    }

    return 0;
}
