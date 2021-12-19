#include<iostream>
using namespace std;


//------------------min heap------------------//
// a heap adt
class Heap
{
    public:
    int *a;  //pointer to craete an dybanmic array
    int heap_size;  //for the heap size
    int capacity;  //size of the array
   
//-----------------constructor-----------------//
    Heap(int capacity)
    {
        this->capacity=capacity;
        a=new int(capacity);
        heap_size=0;   //initially no elemnt
    }

//------------------parent-------------------//
    //return the parent elemnt index of an index
    int parent(int i)
    {
        return (i-1)/2;
    }

//----------------leftchild-------------------// 
    //return the index of a left child of a parent index
    int leftchild(int i)
    {
        return 2*i+1;
    }

//------------------rightchild------------------//
    //return the index of a right child of a parent index
    int rightchild(int i)
    {
        return 2*i+2;
    }

//-----------------swap-----------------//
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
//------------------insert------------------//
    //to insert new element
    void insertElemnt(int key);
     

//------------------print--------------------//
    //to print the elemnts present in the heap
    void print()
    {
        cout<<endl;
        for(int i=0;i<heap_size;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
//----------------minHeapify-------------------//
    //function to arrange the tree after that index in the proper heap tree
    void minHeapify(int i);

//-----------------linear search-----------------//
    //serach the elemnt in the array and return the index
    int search(int key)
    {
        for(int i=0;i<heap_size;i++)
        {
            if(key==a[i])
            return i;
        }
        return -1;
    }

//-----------------extractMin-----------------------//
    //return the root value of the min heap that is the minimum value in the heap
    //and also we will remove the root elemnt
    //and the arrange it again(heapyfy it)
    int extractMin();
    
//-------------------decreaseKey---------------------//
    void decreaseKey(int i)
    {
        
        while (i!=0)
        {
           swap(a[i],a[parent(i)]);
           i=parent(i);
        }
        
    }

//---------------------deleteKey-----------------------//
    //if will remove a particular elemnt and then arrange it to heap property
    void deleteKey(int key)
    {
        int i= search(key);
        a[i]=-1;
        decreaseKey(i);
        extractMin();
    } 
//--------------------heapSort----------------------//
//we will sort a array using heap
void heapsort(int a[],int n)
{
    
    //we can also add an extra condition to check if the size of the arry should be less than or equal to heap capacity
    if(n>capacity)
    {
        cout<<"Array size is Bigger\n";
        return;
    }

   //then i have inserted the elemnts from the array to the heap with keeping the heap property in mind
    for(int i=0;i<n;i++)
    {
        insertElemnt(a[i]);
    }
    int temp[n];
    //then i have extracted the min and stored in a temp variable 
    //i can store it in the same array but its okay
    for(int i=0;i<n;i++)
    {
    temp[i]= extractMin();  //then i have printed it
    cout<<temp[i]<<" ";
    }   
}


};  //----->Heap class ends here


//----------------------insertElemnt----------------------//
void Heap::insertElemnt(int key)
{
    if(capacity==heap_size)
    {
        cout<<"Heap Full\n";
        return;
    }
    if(heap_size==0)
    {
        a[0]=key;
        heap_size++;
        return;
    }
    int i=heap_size;
    a[i]=key;
    heap_size++;
    i=heap_size-1;
    while (i!=0 && a[i]<a[parent(i)])
    {
        swap(a[i],a[parent(i)]);
        i=parent(i);
    }
}

//--------------------minHeapify---------------------//
void Heap::minHeapify(int i)
{
    int l=leftchild(i);   //index of the left child of index i
    int r=rightchild(i);  //index of the right child of index i
    
    //a  varaibel to store the index of the smallest elemnt we will find
    int small=i;

    //first we check if if left child is smaller or not if smaller then we will store it to the small
    if(l < heap_size && a[l]<a[i])
    small=l;
    //then we will compare the elemnt at the small index with right index then find out which one is smaller
    if(r <heap_size && a[r]<a[small])
    small=r;

    //then we will check if the small value has changed from initail that is if it is i or not 
    //if small==i then we wont do wny thing our array is in the right format
    //if small!==i then we will actuall  swap the value in index i with the value in ideex small
    //and the againg call this function recursively for the index small 
    if(small!=i)
    {
        swap(a[i],a[small]);
        minHeapify(small);
    }

}

//--------------------extractMin------------------//
int Heap::extractMin()
{
    if(heap_size==0)
    {
        cout<<"Empty\n";
        return -1;
    }
    //we will first store the root value we want to an variable 
    int root=a[0]; 
    //then i have copied the last elemnt to the root node 
    a[0]=a[heap_size-1];
    heap_size--;         //heap_size is reduced
    minHeapify(0);         //now after moving the last elemnt to the root now we have to arrange the tree in the heap property

    return root;
}

void heapsoetedarray(int A[],int n)
{
    Heap h(n);
    for(int i=0;i<n;i++)
    {
        h.insertElemnt(A[i]);
    }

    for(int i=0;i<n;i++)
    {
        A[i]=h.extractMin();
        
    }
    //printing
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
}



//---------------------main---------------------//
int main()
{
    Heap h(6);
    
    int a[]={8,3,7,1,2,7};  
    int n= sizeof(a)/sizeof(a[0]);
    heapsoetedarray(a,n);
    return 0;
}

