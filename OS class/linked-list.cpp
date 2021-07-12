#include<bits/stdc++.h>
using namespace std;


typedef struct a
{
    int id;
    struct a *next, *prev;
}node; //for an item of linked list

typedef struct
{
    node *head, *tail;
}List; //for a linked list

void push(List *list, int id)
{
    node *t=(node *) malloc(sizeof(node));
    t->id = id;
    t-> next = t-> prev = 0;
    if(list->head==0)//if the list is empty
    {
        list->head = list->tail = t;
    }
    else
    {
        list->tail->next = t;
        t->prev = list->tail;
        list->tail = t;
    }
    cout<<t->id<<" has been added "<<t<<endl;
}

main()
{
    //linked list
    List *stack = (List *) malloc(sizeof(List));
    stack->head = stack->tail = 0;
    push(stack, 1);
    push(stack, 2);
}
