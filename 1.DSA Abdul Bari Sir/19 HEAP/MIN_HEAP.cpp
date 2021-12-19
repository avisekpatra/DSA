#include<iostream>
using namespace std;

class MinHeap
{
public:
int *arr; //pointer to create an array dynamicall in the heap memmory
int capacity; //the size of the array we will create
int heap_size;  //no of elemntsi the heap tree

//constructors
MinHeap(int capacity)
{
    this->capacity=capacity;
    arr= new int(capacity);
    heap_size=0;
}

int parent(int i)
{
    if(i==0)
    return 0;
    else 
    return (i-1)/2;
}

void print()
{
    cout<<endl;
    for(int i=0;i<heap_size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void insertElement(int key);

};

void MinHeap::insertElement(int key)
{

     if(heap_size==capacity-1)
     {
         cout<<"Array Full\n";
         return;
     }    
    //first we will insert in the array the elemnt then we will arrange it in the heap tree
    
    int i=heap_size; //storing the heap size in a varibel which we will use as iterator
    arr[i]=key;
    heap_size++;
    while (i!=0 && arr[i]<arr[parent(i)])
    {
     swap(arr[i],arr[parent(i)];
     i= parent(i);
    }

}


int main()
{
    MinHeap h;
    h.insertElement(16);
    h.insertElement(8);
    h.insertElement(56);

    h.print();
    return 0;

}