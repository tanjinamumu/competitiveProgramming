#include<bits/stdc++.h>
using namespace std;

#define P_NORMAL 5
#define P_HIGH 1
#define P_LOW 10

int PID=1, CLOCK=0, totalwaitingtime=0;
typedef struct a
{
    int pid, priority;
    int burstTime, arrivalTime, waitingtime, turnArTime, endedTime;
    struct a *next, *prev;
}PCB;

typedef struct
{
    PCB *head, *tail;
}Queue;

void printQueue(Queue *q)
{
    PCB *pn = q->head;
    printf(" PID\t  CPUBurst\t   Arrival\t   Waiting\t   NodeLocation\n");

    while(pn!=0)
    {
        printf("%3d  %8d  %15d  %15d    %15d\n",pn->pid, pn->burstTime, pn->arrivalTime, pn->waitingtime, pn);
        pn = pn->next;
    }
}

void insertProcess(Queue *q, int burst, int priority)
{
    PCB *newprocess = (PCB *)malloc(sizeof(PCB));
    newprocess->next = newprocess->prev = 0; //link reset

    //set values for new process
    newprocess->pid = PID++;
    newprocess-> arrivalTime = CLOCK;
    newprocess->burstTime = burst;
    newprocess->priority = priority;
    newprocess->waitingtime = -1;
    newprocess->turnArTime = -1;
    //newprocess->endedTime = -1;

    //link setup
    if(q->head == 0)
    {
        q->head = q->tail = newprocess;
    }
    else
    {
        q->tail->next = newprocess;
        newprocess->prev = q->tail;
        q->tail = newprocess;
    }
}


main()
{
    Queue *readyQ = (Queue *)malloc(sizeof(Queue));
    readyQ->head = readyQ->tail = 0;
    insertProcess(readyQ, 10, P_NORMAL);
    insertProcess(readyQ, 5, P_NORMAL);
    insertProcess(readyQ, 20, P_NORMAL);

    printQueue(readyQ);
}

