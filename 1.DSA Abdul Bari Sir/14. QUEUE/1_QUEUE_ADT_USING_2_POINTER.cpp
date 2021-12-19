#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *p; //for array
    int front; //points to the 1st elemnt ,or the index befor the first elemnt 
    int rear; //last elemnt of the queue
    int arraysize; //for the array size
    public:
    
    Queue(int size); //construuctor
    
    void enqueue(int n); //for inserting at the rear

    int dequeue(); //for deleting from front and move the fornt pointer

    int length(); //no of elements in the queue

    bool isFull(); //checking if the queue is full or not

    bool isEmpty(); //empty or not
    
    int queueFront(); //return the front element
    
    int queueRear(); //return the back elemnt
    
    void Display(); //display all elemnt in the queue
    
    ~Queue(){delete []p;}
};

Queue::Queue(int size)
{
    arraysize=size;
    front=-1; //initally asssigning to -1
    rear=-1; 
    p=new int[arraysize];
}
int Queue::length()
{   int len=0;
   for(int i=front;i<rear;i++)
   {
       len++;
   }
   return len;
}

void Queue::enqueue(int n)
{
    //first we check if the queue is full or not
    if(rear==arraysize-1) //size at the last index 
    cout<<"Queue is full\n";
    else
    {
        rear++; //first move rear to the next vacant index and fill there
        p[rear]=n;
    }
}

int Queue::dequeue()
{
    //that if we point front to the previous index of the actual front element
    if(front==rear)
    {
    cout<<"empty queue\n";
    return -1;
    }
    else
    {
        front++; 
    }
    //we can also point to the the front elemnt itself and now the condision for empty will be 
    //if(front>rear) true then empty

}

bool Queue::isEmpty()
{
    return front==rear;
}

bool Queue::isFull()
{
    return rear = (length()-1);
}

int Queue::queueFront()
{ 
  if(isEmpty())
  return -1;
  else
  return p[front+1];  //as front point to the index before thr front elemnt
}

int Queue::queueRear()
{
    if(isEmpty())
    return -1;
    else
    return p[rear];
}

void Queue::Display()
{
    int i = front+1;
    for( ;i<=rear;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Queue q(6);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.enqueue(3);
    q.enqueue(5);
    q.dequeue();
    q.Display();
    return 0;
}


