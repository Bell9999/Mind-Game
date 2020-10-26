#include <stdio.h>
#include <stdlib.h>
#include"dqh.h"
#include"dqh1.h"

int main()
{
    Dequeue d;
    Dequeue1 d1,d2,d3,q1,q2,q3;
    char p;
    int i,j;
    CreateDequeue(&d);
    CreateDequeue1(&d1);
    CreateDequeue1(&d2);
    CreateDequeue1(&d3);
    printf("\n********I CAN READ YOUR MIND********\n");
    printf("\nSelect a number in number set that I gave you and keep remember it.\nThen tell me which column is the number in.\n");
    printf("\nA\tB\tC\n");
    for(i=1;i<22;)
    {
        printf("%d",i);
        PutFront(i,&d1);
        i++;
        printf("\t%d",i);
        PutFront(i,&d2);
        i++;
        printf(" \t%d\n",i);
        PutFront(i,&d3);
        i++;
    }
    printf("Which column(A/B/C): ");
    scanf(" %c",&p);
    if(p=='A')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
    }
    if(p=='B')
    {
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }
    if(p=='C')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }

    printf("A\tB\tC\n");
    while(!IsDequeueEmpty(&d))
    {
        for(i=1;i<22;)
        {
            ServeFront(&j,&d);
            printf("%d",j);
            PutFront(j,&d1);
            i++;
            ServeFront(&j,&d);
            printf("\t%d",j);
            PutFront(j,&d2);
            i++;
            ServeFront(&j,&d);
            printf(" \t%d\n",j);
            PutFront(j,&d3);
            i++;
        }
    }
    printf("Which column(A/B/C): ");
    scanf(" %c",&p);
    if(p=='A')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
    }
    if(p=='B')
    {
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }
    if(p=='C')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }
    printf("A\tB\tC\n");
    while(!IsDequeueEmpty(&d))
    {
        for(i=1;i<22;)
        {
            ServeFront(&j,&d);
            printf("%d",j);
            PutFront(j,&d1);
            i++;
            ServeFront(&j,&d);
            printf("\t%d",j);
            PutFront(j,&d2);
            i++;
            ServeFront(&j,&d);
            printf(" \t%d\n",j);
            PutFront(j,&d3);
            i++;
        }
    }
        printf("Which column(A/B/C): ");
    scanf(" %c",&p);
    if(p=='A')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
    }
    if(p=='B')
    {
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }
    if(p=='C')
    {
       while(!IsDequeue1Empty(&d2))
       {
           GetFront(&j,&d2);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d3))
       {
           GetFront(&j,&d3);
           AppendFront(j,&d);
       }
       while(!IsDequeue1Empty(&d1))
       {
           GetFront(&j,&d1);
           AppendFront(j,&d);
       }
    }

    for(i=1;i<12;i++)
       { ServeFront(&j,&d);
         if(i==11)
           printf("\nYour Number is %d",j);
       }

    /*while(!IsDequeueEmpty(&d))
    {
        ServeFront(&j,&d);
        printf(" %d",j);
    }*/
    return 0;
}
