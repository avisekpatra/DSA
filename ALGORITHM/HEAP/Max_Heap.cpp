#include<iostream>
using namespace std;

class MaxHeap
{
    public:
    int *a;
    int size;
    int capacity;
    MaxHeap(int cap)
    {
        capacity=cap;
        a= new int(cap);
        size=0;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    int leftchild(int i)
    {
        return 2*i+1;
    }
    int rightchild(int i)
    {
        return 2*i+2;
    }
    void swapElemnt(int *p,int *q)
    {
        int temp=*p;
        *p=*q;
        *q=temp;
    }
    void insert(int key)
    {
        if(size==capacity)
        {
            cout<<"capacity is full\n";
            return ;
        }

       a[size]=key;
       int i=size;
       size++;
       while (i>=0)
       {
           if(a[i]>a[parent(i)])
           {
               swapElemnt(&a[i],&a[parent(i)]);
               i=parent(i);
           }
       }
    }

    void heapify(int i)
    {
        int l = leftchild(i);
        int r = rightchild(i);
        int max=i;
        if(a[max]<a[l])
        max=l;
        if(a[max]<a[r])
        max=r;
        if(max!=i)
        {
            swapElemnt(&a[i],&a[max]);
            heapify(max);
        } 
    }

    int extractMax()
    {
        if(size==0)
        {
          return -1;
        }
        if(size==1)
        {
            int x=a[0];
            size--;
            a[0]=x;
            return x;
        }

        int x=a[0];
        a[0]=a[size-1];
        size--;
        heapify(0);
        a[size-1]=x;
        return x;
    }
};

void heapsort(int arr[],int n)
{
    MaxHeap h(n);
    for(int i=0;i<n;i++)
    {
        h.insert(arr[i]);
    }

    for(int i=n-1;i>=0;i--)
    {
       arr[i]=h.extractMax();
    }
}

int main()
{
    int a[]={3,7,1,9,34,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    heapsort(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}