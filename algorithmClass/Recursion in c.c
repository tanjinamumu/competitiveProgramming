<<<<<<< HEAD
#include <stdio.h>

long long int factorial(int i)
{
    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}


int fibonacci(int j)
{

    if(j == 0)
    {
        return 0;
    }

    if(j == 1)
    {
        return 1;
    }
    return fibonacci(j-1) + fibonacci(j-2);
}

int  main()
{
    int i = 12;
    printf("\nFactorial of %d is %d\n", i, factorial(i));


    int j;
    printf("\n\nFibonacci series are: ");
    for (j=0; j<12; j++)
    {
        printf("%d ", fibonacci(j));
    }
    printf("\n");

    return 0;
}
=======
#include <stdio.h>

long long int factorial(int i)
{
    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}


int fibonacci(int j)
{

    if(j == 0)
    {
        return 0;
    }

    if(j == 1)
    {
        return 1;
    }
    return fibonacci(j-1) + fibonacci(j-2);
}

int  main()
{
    int i = 12;
    printf("\nFactorial of %d is %d\n", i, factorial(i));


    int j;
    printf("\n\nFibonacci series are: ");
    for (j=0; j<12; j++)
    {
        printf("%d ", fibonacci(j));
    }
    printf("\n");

    return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
