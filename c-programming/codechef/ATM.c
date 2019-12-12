#include<stdio.h>
int main()
{
    int amount_of_cash;
    double sum,cash,initial_amount;
    scanf("%d %lf",&amount_of_cash,&initial_amount);
    if(((amount_of_cash%5)==0)&&((initial_amount-amount_of_cash)>=0.50))
    {
        sum=initial_amount-amount_of_cash;
        cash=sum-0.50;
        printf("%.2lf\n",cash);
    }
    else
    {
        printf("%.2lf\n",initial_amount);
    }
    return 0;
}
