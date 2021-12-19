#include<iostream>
using namespace std;

class maxHeap
{
    public:
    int *arr;
    int heap_size;
    int capacity;
    maxHeap(int capacity)
    {
        this->capacity=capacity;
        arr= new int(capacity);
        heap_size=0;
    }
    int parent(int i)
    {
        return (i-1)/2 ;
    }
    int leftchild(int i)
    {
        return 2*i+1;
    }
    int rightchild(int i)
    {
        return 2*i+2;
    }
    void insertElement(int key)
    {
      if(heap_size==capacity)
      {
          cout<<"full";
          return ;
      }
      int i= heap_size;
      arr[i]=key;
      heap_size++;
      while (i!=0 && arr[i]>arr[parent(i)])
      {
          swap(arr[i],arr[parent(i)]);
          i=parent(i);
      }
    }
    void heapify(int i)
    {  
        int l= leftchild(i);
        int r= rightchild(i);
        int max =i;
        if(l>0 && arr[l] > arr[i])
        max=l;
        if(r>0 && arr[r] > arr[max])
        max=r;
        if(max!=i)
        {
            swap(arr[i],arr[max]);
            heapify(max);
        }
    }
    int extractMax()
    {
        if(heap_size==0)
        {
            cout<<"Empty heap\n";
            return -1;
        }
        int root=arr[0];
        if(heap_size==1)
        {
            heap_size--;
            return root;
        }
        arr[0]=arr[heap_size-1];
        heap_size--;
        heapify(0);
        return root;
    }
    int search(int key)
    {
        for(int i=0;i<heap_size;i++)
        {
            if(key==arr[i])
            return i;
        }
        return -1;
    }
    void deleteKey(int i)
    {
        while (i!=0)
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
        
    }
    void deleteElement(int key)
    {
        int i=search(key);

        if(heap_size==0)
        {
            cout<<"Empty heap\n";
            return;
        }
        
        arr[i]=-1;
        deleteKey(i);
        extractMax();
    }
    void heapsort(int A[],int n)
    {
        if(n>capacity)
        {
            cout<<"can not sort an array of size bigger than heap array capacity\n";
            return ;
        }
        for(int i=0;i<n;i++)
        {
            insertElement(A[i]);
        }
        int temp[n];
        for(int i=0;i<n;i++)
        {
         temp[i]=extractMax();
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<temp[i]<<" ";
        }
    }
    void print()
    {
        if(heap_size==0)
        return;

        for(int i=0;i<heap_size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
};


int main()
{
    maxHeap h(10);
    int a[5]={1,8,3,6,4};
    h.heapsort(a,5);
   

    return 0;
}