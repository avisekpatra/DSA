#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    int heap_capacity;
    int heap_size;
    int *A;
    MaxHeap(int heap_capacity)
    {
        this->heap_capacity=heap_capacity;
        A=new int(heap_capacity);
        heap_size=0;
    }

    void swaping(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
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
    void insert(int key)
    {
        if(heap_capacity==heap_size)
        {
            cout<<"Heap is Full\n";
            return ;
        }
        int i=heap_size;
        A[i]=key;
        heap_size++;

        while (i>0 && A[i]>A[parent(i)])
        {
           swaping(&A[i],&A[parent(i)]);
           i=parent(i);
        }   
    }

    void MaxHeapify(int i)
    {
        int l=leftchild(i);
        int r=rightchild(i);
        int max=i;

        if(l<heap_size && A[l]>A[max])
        max=l;
        if(r<heap_size && A[r]>A[max])
        max=r;

        if(i!=max)
        {
           swaping(&A[i],&A[max]);
           MaxHeap(max);
        }

    }

    int extractMax()
    {
        if(heap_size==0)
        {
            cout<<"Nothing to extract\n";
            return -1;
        }

        if(heap_size==1)
        {
            heap_size--;
            return A[0];
        }

        int root=A[0];
        A[0]=A[heap_size-1];
        heap_size--;

        MaxHeapify(0);
        return root;
    }



    
    void serachElemnt(int key)
    {
        for(int i=0;i<heap_size;i++)
        {
            if(key==A[i])
            {
                return i;
            }
        }
    }


    void pushUpar(int i)
    {
        while (i>0 && A[i]>A[parent(i)])
        {
            swaping(&A[i],&A[parent[i]]);
            i=parent(i);
        }
    }

   
    void deletelemnt(int key)
    {
        int index=serachElemnt(key);
        A[index]=INT_MAX;
        pushUpar(index);

        extractMax(0);
    }
    void display()
    {
        for(int i=0;i<heap_size;i++)
        {
            cout<<A[i]<<" ";
        }
    }
};




int main()
{
    MaxHeap h(10);
    int A[]={30,20,15,5,10,12,6};
    int n=sizeof(A)/sizeof(A[0]);

    for(int i=0;i<n;i++)
    {
        h.insert(A[i]);
    }
    h.insert(45);
    h.insert(32);
    h.display();
    return 0;
}