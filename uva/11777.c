#include<stdio.h>
int main()
{
    int Ter1,ter2,Fin,Att,ct1,ct2,ct3,ct,ctf,t,i,grade;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d %d",&Ter1,&ter2,&Fin,&Att,&ct1,&ct2,&ct3);
        if(ct1<=ct2&&ct1<=ct3)
        {
            ct=(ct2+ct3)/2;
        }
        else if(ct2<=ct3&&ct2<=ct1)
        {
            ct=(ct3+ct1)/2;
        }
        else if(ct3<=ct1&&ct3<=ct2)
        {
            ct=(ct1+ct2)/2;
        }
        ctf=Ter1+ter2+Fin+Att+ct;
        if(ctf>=90)
        {
            printf("Case %d: A\n",i);
        }

        else if(ctf>=80)
        {
            printf("Case %d: B\n",i);
        }

        else if(ctf>=70)
        {
            printf("Case %d: C\n",i);

        }

        else if(ctf>=60)
        {
            printf("Case %d: D\n",i);
        }
        else if(ctf<60)
        {
            printf("Case %d: F\n",i);
        }
    }
}
