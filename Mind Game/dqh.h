#ifndef DQH_H_INCLUDED
#define DQH_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXDEQUEUE 22
#define FULL MAXDEQUEUE-1

typedef int DequeueEntry;
typedef struct{
    DequeueEntry entry[MAXDEQUEUE];
    int rear;
    int front;
    int count;
}Dequeue;
void CreateDequeue(Dequeue *d)
{
    d->count=0;
    d->front=0;
    d->rear=-1;
}
bool IsDequeueFull(const Dequeue *d)
{
    return(d->count==FULL);
}
bool IsDequeueEmpty(const Dequeue *d)
{
    return(d->count==0);
}
void ServeFront(DequeueEntry *item,Dequeue *d)
{
    if(IsDequeueEmpty(d))
    {
        printf("Dequeue is Empty\n");
        exit(1);
    }
    *item=d->entry[d->front++];
    d->count--;
}
void ServeRear(DequeueEntry *item,Dequeue *d)
{
    if(IsDequeueEmpty(d))
    {
        printf("Dequeue is empty\n");
        exit(1);
    }
    *item=d->entry[d->rear--];
    d->count--;
}
void AppendRear(DequeueEntry item,Dequeue *d)
{
    if(IsDequeueFull(d))
    {
        printf("Dequeue is full");
        exit(1);
    }
    d->entry[++d->rear]=item;
    d->count++;
}
void AppendFront(DequeueEntry item,Dequeue *d)
{
    if(IsDequeueFull(d))
    {
        printf("Dequeue is full");
        exit(1);
    }
    else if(IsDequeueEmpty(d))
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

#endif // DQH_H_INCLUDED
