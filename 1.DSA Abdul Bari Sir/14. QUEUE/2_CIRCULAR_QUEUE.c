#include<stdio.h>
#include<stdlib.h>

struct Queue
{
int front;
int rear;
int size;
int *a;
};

void create(struct Queue *q,int arrsize)
{
    q->size=arrsize;
    q->a=(int *)malloc(q->size*sizeof(int));
    q->front=0;
    q->rear=0;
}

void enqueue(struct Queue *q,int n)
{
    if((q->rear+1)%q->size==q->front)
    printf("the queue is full\n");
    else
    {
     q->rear=(q->rear+1)%q->size;
     q->a[q->rear]=n;   
    }
}

 int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    printf("empty queue\n");
    else
    {
        q->front= (q->front+1)%q->size;     
        x=q->a[q->front];
    }
    return x;
}

void display(struct Queue q)
{
  int i=q->front+1;
  do
  {
      printf(q->a[i]," ")
      i=(i+1)%q->size;
    
  } while (q->p[i]!=q->front+1);

}

int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,5);
    enqueue(&q,8);
    dequeue(&q,9);
    display(q);
    return 0;  
}