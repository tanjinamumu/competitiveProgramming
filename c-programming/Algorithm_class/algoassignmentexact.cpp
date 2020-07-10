#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define a 20
using namespace std;
typedef struct
{
    char name[a];
    double weight,price,ppw;
} item;
bool cmp(item cA,item cB)
{
    if(cA.ppw==cB.ppw)
        return cA.weight>cA.weight;
    return cA.ppw>cB.ppw;
}
void showVec(string vecName,double space,vector<item>items)
{
    cout<<vecName;
    sort(items.begin(),items.end(),cmp);
    double curWeight=0.0;
    for(int i=0; i<(int)items.size(); i++)
    {
        if(curWeight + items[i].weight <= space)
        {
            curWeight += items[i].weight;
            printf("%s taken with a fraction of 1\n",items[i].name);
        }
        else{
        int remain = space - curWeight;
            printf("%s taken with a fraction of %lf\n",items[i].name,((double)remain/items[i].weight));
    }
    }
}
double fractionalKnapsack(vector<item>itemLt,double remSpace)
{
    double totPriceAchieved=0.0;
    sort(itemLt.begin(),itemLt.end(),cmp);
    for(int i=0; i<(int)itemLt.size(); i++)
    {
        if(itemLt[i].weight<=remSpace)
        {
            totPriceAchieved +=itemLt[i].price;
            remSpace-=itemLt[i].weight;
        }
        else
        {
            totPriceAchieved +=(remSpace*itemLt[i].ppw);
            remSpace=0.0;
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
    while(scanf("%d %lf",&totItems,&totSpace)==2)
    {
        vector<item>itemList;
        for(int i=0; i<totItems; i++)
        {
            scanf("%s %lf %lf",&tpItem.name,&tpItem.price,&tpItem.weight);
            tpItem.ppw=tpItem.price/tpItem.weight;
            itemList.push_back(tpItem);
        }
        printf("Total price achieved: %.3lf\n",fractionalKnapsack(itemList,totSpace));

        showVec("List of selected items\n",totSpace,itemList);
    }
    return 0;
}
