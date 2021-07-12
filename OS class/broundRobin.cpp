#include<stdio.h>

void main()
{
    int b[10],br[10],wo[10];
    int n,i,bt,q,count;
    float awt=0,att=0;

    for (i=0;i<10;i++)
         wo[i]=0;

    printf("Input the nmbr of processes running....");
    scanf("%d",&n);
    printf("\n Input their burst tym in order..");

    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("\n Input the quantum time for the algorithm..");
    scanf("%d",&q);

    for(i=0;i<n;i++)
        br[i]=b[i];
    bt=0;

    for(i=0;i<n;i++)
        bt=bt+b[i];
    count=0;
    printf("\nThe Gantt Chart\n");
    printf("\n 0");
    do
    {
        for(i=0;i<n;i++)
        {
            if(br[i]==0)
            {}
            else
            {
                if(br[i]>=q)
                {
                    br[i]=br[i]-q;
                    if(br[i]==0)
                    wo[i]=count;
                    count=count+q;
                    printf("\t(P%d)",i);
                    printf("\t%d",count);
                }
                else
                {
                    if(br[i]<q)
                    {
                        count=count+br[i];
                        br[i]=0;
                        wo[i]=count;
                        printf("\t(P%d)",i);
                        printf("\t%d",count);
                    }
                }
             }
        }
    }
    while(count<bt);

    for(i=0;i<n;i++)
        awt=awt+(wo[i]-b[i]);
    awt=awt/n;
    printf("\n The average waiting time is....%f\n",awt);
}
