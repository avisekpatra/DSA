#include<iostream>
using namespace std;

void swapelements(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//-------------bubble sort---------------//
void bubblesort(int A[],int n)
{
    for(int i=1;i<n;i++)  
    {
        int flag=0;
        for(int j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
              swapelements(&A[j],&A[j+1]);
              flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Already sorted\n";
            return;
        }
    }
}


//----------------insertion sort------------------//
void insertionSort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=A[i];
        while(key<A[j])
        {
            A[j+1]=A[j];
        }
        A[j+1]=key;
    }
}

//------------------selection sort---------------------//
void selectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      int min=i;
      for(int j=i+1;j<n;j++)
      {
          if(A[min]>A[j])
          {
              min=j;
          }
      }
      swapelements(A[i],A[min]);
    }
}


//------------------quick sort---------------------//
int partition(int A[],int left,int right)
{
int pivot=A[left];
int i=left;
int j=right;
while (i<j)
{
    while (A[i]<=pivot)
    {
        i++;
    }
    while (A[j]>pivot)
    {
        j++;
    }

    if(i<j)
    {
        swapelements(&A[i],&A[j]);
    }   
}
swapelements(&A[j],pivot);

return j;

}

void QuickSort(int A[],int left,int right)
{
    if(right>left)
    {
        int index=partition(A[],left,right);
        QuickSort(A,left,index-1);
        QuickSort(A,index+1,right);
    }
}


int main()
{
    int A[]={1,2,3,4,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    bubblesort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}