#ifndef DQH1_H_INCLUDED
#define DQH1_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXDEQUEUE1 9
#define FULL1 MAXDEQUEUE1-1

typedef int Dequeue1Entry;
typedef struct{
    Dequeue1Entry entry[MAXDEQUEUE1];
    int rear;
    int front;
    int count;
}Dequeue1;
void CreateDequeue1(Dequeue1 *d)
{
    d->count=0;
    d->front=0;
    d->rear=-1;
}
bool IsDequeue1Full(const Dequeue1 *d)
{
    return(d->count==FULL1);
}
bool IsDequeue1Empty(const Dequeue1 *d)
{
    return(d->count==0);
}
void GetFront(Dequeue1Entry *item,Dequeue1 *d)
{
    if(IsDequeue1Empty(d))
    {
        printf("Dequeue1 is Empty\n");
        exit(1);
    }
    *item=d->entry[d->front++];
    d->count--;
}
void GetRear(Dequeue1Entry *item,Dequeue1 *d)
{
    if(IsDequeue1Empty(d))
    {
        printf("Dequeue1 is empty\n");
        exit(1);
    }
    *item=d->entry[d->rear--];
    d->count--;
}
void PutRear(Dequeue1Entry item,Dequeue1 *d)
{
    if(IsDequeue1Full(d))
    {
        printf("Dequeue1 is full");
        exit(1);
    }
    d->entry[++d->rear]=item;
    d->count++;
}
void PutFront(Dequeue1Entry item,Dequeue1 *d)
{
    if(IsDequeue1Full(d))
    {
        printf("Dequeue1 is full");
        exit(1);
    }
    else if(IsDequeue1Empty(d))
    {
        d->entry[d->front]=item;
        d->rear++;

    }
    else if(d->front==0)
    {
        int i;
        for(i=d->rear;i>=d->front;i--)
            d->entry[i+1]=d->entry[i];
        d->entry[d->front]=item;
        d->rear++;
    }
    else
    {
        d->entry[--d->front]=item;
    }
    d->count++;
}


#endif // DQH1_H_INCLUDED
