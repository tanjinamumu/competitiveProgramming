#include<bits/stdc++.h>
using namespace std;

#define P_NORMAL 5
#define P_HIGH 1
#define P_LOW 10

int PID=1, CLOCK=0, totalwaitingtime=0, Totalprocessexecute=0;
typedef struct a
{
    int pid, priority;
    int burstTime, arrivalTime, waitingtime, turnArTime, endedTime;
    struct a *next, *prev;
} PCB;

typedef struct
{
    PCB *head, *tail;
} Queue;

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

void insertAsShortestJob(Queue *q, int burst, int priority)
{
    if (q->head == 0)
    {
        insertProcess(q, burst, priority);
    }
    else
    {
        PCB *newProcess = (PCB *)malloc(sizeof(PCB));
        newProcess->next = newProcess->prev = 0; //link reset

        //setting values for new process
        newProcess->pid = PID++;
        newProcess->arrivalTime = CLOCK;
        newProcess->burstTime = burst;
        newProcess->priority = priority;

        newProcess->waitingtime = -1;
        newProcess->turnArTime = -1;

        // appropriate location search
        PCB *loc = q->head;
        while (loc != 0 && burst > loc->burstTime)
        {
            loc = loc->next;
        }
        // loc pv finds out the post position for the new PCB

        // Link Setup
        if (loc == 0)
        {
            //if found nothing so it haas to be at the end (tail).
            q->tail->next = newProcess;
            newProcess->prev = q->tail;
            q->tail = newProcess;
        }
        else if (loc == q->head)
        {
            q->head->prev = newProcess;
            newProcess->next = q->head;
            q->head = newProcess;
        }
        else
        {
            newProcess->prev = loc->prev;
            loc->prev->next = newProcess;
            loc->prev = newProcess;
            newProcess->next = loc;
        }
    }
}

PCB deQueue(Queue *list)
{
    PCB t;
    t.pid = 0;
    if(list->head == 0)
    {
        printf("\n Queue is empty ! \n");
        return t;
    }
    t = *list->head;
    list->head = list->head->next;

    return t;
}

void executeprocess(Queue *rq)
{
    while(!rq->head == 0) //CPU execution
    {
        PCB r = deQueue(rq);
        printf("\n\nProcess %d being processed",r.pid);
        r.waitingtime = CLOCK - r.arrivalTime;
        totalwaitingtime += r.waitingtime;
        CLOCK += r.burstTime;
        printf("\nWaiting Time for process %d is %d",r.pid, r.waitingtime);
        printf("\nAfter completion, CLOCK= %d", CLOCK);
        Totalprocessexecute++;
        //printQueue(rq);
    }
    //printf("\nAverage waiting time (FCFs) = %f\n", (float)(totalwaitingtime/Totalprocessexecute));
}

main()
{
    Queue *readyQ = (Queue *)malloc(sizeof(Queue));
    readyQ->head = readyQ->tail = 0;

    //insertProcess(readyQ, 10, P_NORMAL);
    //insertProcess(readyQ, 5, P_NORMAL);
    //insertProcess(readyQ, 20, P_NORMAL);

    insertAsShortestJob(readyQ, 10, P_NORMAL);
    insertAsShortestJob(readyQ, 5, P_NORMAL);
    insertAsShortestJob(readyQ, 20, P_NORMAL);
    //insertAsShortestJob(readyQ, 3, P_NORMAL);

    //printQueue(readyQ);
    //deQueue(readyQ);
    printQueue(readyQ);

    executeprocess(readyQ);

    printf("\nAverage waiting time = %f\n", (float)(totalwaitingtime/Totalprocessexecute));
}









