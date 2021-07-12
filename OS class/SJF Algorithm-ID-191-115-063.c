//Tanjina Ahmed Mumu
//ID-191-115-063
//Batch: CSE-47(B)

//Implementation of the Shortest Job First (SJF) algorithm::

//Code Starts here....

#include<stdio.h>
#include<stdlib.h>

#define P_SIZE 5

//declaring globally
int pNo=1, Time=0, twaitingt=0, texecutet=0;

//structure holding all variables and pointer.
typedef struct s
{
    int procNo, priority;
    int burstTime, arrivalTime, waitingtime, turnAroundTime;
    struct s *next, *prev;
} PCB; //ProcessControlBlock;

typedef struct
{
    PCB *head, *tail;
} Queue;

void pQueue(Queue *q) //queue
{
    PCB *processno = q->head;
    printf(" pNo\t  BurstTime\t   ArrivalTime\t    WaitingTime\t   Location\n");

    while(processno!=0)
    {
        printf("%3d   %8d   %15d  %15d   %15d\n",processno->procNo, processno->burstTime, processno->arrivalTime, processno->waitingtime, processno);
        processno = processno->next;
    }
}

void insertProcess(Queue *q, int bursttime, int priority)
{
    PCB *neW = (PCB *)malloc(sizeof(PCB));
    neW->next = neW->prev = 0; // reseting link

    //setting values for new process
    neW->procNo = pNo++;
    neW-> arrivalTime = Time;
    neW->burstTime = bursttime;
    neW->priority = priority;
    neW->waitingtime = -1;
    neW->turnAroundTime = -1;

    //linking setup newly
    if(q->head == 0)
    {
        q->head = q->tail = neW;
    }
    else
    {
        q->tail->next = neW;
        neW->prev = q->tail;
        q->tail = neW;
    }
}

//SJF starts
void insertProcessAsShortestJob(Queue *q, int bursttime, int priority)
{
    if (q->head == 0)
    {
        insertProcess(q, bursttime, priority);
    }
    else
    {
        PCB *neW = (PCB *)malloc(sizeof(PCB));
        neW->next = neW->prev = 0; // reseting link

        //setting values for new process
        neW->procNo = pNo++;
        neW->arrivalTime = Time;
        neW->burstTime = bursttime;
        neW->priority = priority;

        neW->waitingtime = -1;
        neW->turnAroundTime = -1;

        //location search
        PCB *key = q->head;
        while (key != 0 && bursttime > key->burstTime)
        {
            key = key->next;
        }
        // key finds out the post position for the new PCB

        // Link Setup
        if (key == 0)
        {
            //if found nothing so it has to be at the end(tail).
            q->tail->next = neW;
            neW->prev = q->tail;
            q->tail = neW;
        }
        else if (key == q->head)
        {
            q->head->prev = neW;
            neW->next = q->head;
            q->head = neW;
        }
        else
        {
            neW->prev = key->prev;
            key->prev->next = neW;
            key->prev = neW;
            neW->next = key;
        }
    }
}

PCB deQueue(Queue *list)
{
    PCB t;
    t.procNo = 0;
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

        printf("\n\nProcessNo. %d is Processing:",r.procNo);

        r.waitingtime = Time - r.arrivalTime;
        twaitingt += r.waitingtime;
        Time += r.burstTime;

        printf("\nWaiting Time for process %d is %d",r.procNo, r.waitingtime);
        printf("\nAfter completion, Time = %d", Time);

        texecutet++;
    }
    printf("\n\nAverage waiting time (SJF) = %f\n", (float)(twaitingt/texecutet));
}

int main()
{
    Queue *readyQ = (Queue *)malloc(sizeof(Queue));
    readyQ->head = readyQ->tail = 0;

    insertProcessAsShortestJob(readyQ, 9, P_SIZE);
    insertProcessAsShortestJob(readyQ, 5, P_SIZE);
    insertProcessAsShortestJob(readyQ, 10, P_SIZE);

    pQueue(readyQ);
    executeprocess(readyQ);
}
//Ends here








