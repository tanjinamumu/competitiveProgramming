#include<stdio.h>
#define MAX 10

int top=-1;
int stack[MAX];
void push();
void pop();
void display();

int main()
{
    int n;
    while(1)
    {
        printf("\n*Stack Menu* ");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\nWrong Choice!");
        }
    }
}

void push()
{
    int value;

    if(top==MAX-1)
    {
        printf("\nStack is full!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!\n\n");
    }
    else
    {
        printf("\nDeleted element is %d\n",stack[top]);
        top=top-1;
    }
}

void display()
{
    int i;

    if(top==-1)
    {
        printf("\nStack is empty!\n\n");
    }
    else
    {
        printf("\nStack is: " );
        for(i=top; i>=0; --i)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
