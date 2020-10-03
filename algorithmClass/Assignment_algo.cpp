#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    double weight, price, ppw;
} item;

void showVec(string vecName, vector<item> items)
{
    cout << vecName << " : " << endl;
    for(int i=0; i< (int)items.size(); i++)
    {
        printf("%d -> %0.3lf %0.3lf %0.3lf\n", i, items[i].price, items[i].weight, items[i].ppw);
    }
    cout << endl;
}

bool cmp(item cA, item cB)
{
    return cA.ppw > cB.ppw;
}

double fractionalKnapsack(vector<item> itemLt, double remSpace)
{

    sort(itemLt.begin(), itemLt.end(), cmp);
    showVec("After sorting the vec", itemLt);

    double totPriceAchieved = 0.0;

    for(int i=0; i < (int) itemLt.size(); i++)
    {
        if( itemLt[i].weight <= remSpace )
        {
            //we can take the whole thing or total amount
            totPriceAchieved += itemLt[i].price;
            remSpace -= itemLt[i].weight;
        }
        else
        {
            //you have less space available than your current item's amount
            totPriceAchieved += (remSpace * itemLt[i].ppw);
            remSpace = 0.0;
            break;
        }
    }

    return totPriceAchieved;
}

int main()
{
    int totItems;
    double totSpace;
    item tpItem;
    while(scanf("%d %lf", &totItems, &totSpace) == 2)
    {
        vector<item> itemList;
        for(int i=0; i<totItems; i++)
        {
            scanf("%lf %lf", &tpItem.price, &tpItem.weight);
            tpItem.ppw = tpItem.price / tpItem.weight;
            itemList.push_back(tpItem);
        }
        showVec("itemList after Input", itemList);

        printf("Total price achieved: %0.3lf\n", fractionalKnapsack(itemList, totSpace));
    }
    return 0;
}


/**
3 50
120 30
60 10
100 20

6 15
40 5
10 4
24 3
36 6
20 2
35 7

*/
