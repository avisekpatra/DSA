#include<iostream>
using namespace std;


void swaping(int *A,int *B)
{
    int temp=*A;
    *A=*B;
    *B=temp;
}

int partition(int A[],int low ,int high)
{
    int i=low;
    int j=high;

    int pivot=A[low];

    while (i<j)
    {
       while(A[i]<=pivot)
       {
           i++;
       }
       while(A[j]>pivot)
       {
           j--;
       }

       if(i<j)
       {
           swaping(&A[i],&A[j]);  
       }
    }
    swaping(&A[low],&A[j]);

    return j;
    
}

void quicksort(int A[],int low,int high)
{
    if(low<high)
    {
        int p= partition(A,low,high);
        quicksort(A,low,p-1);
        quicksort(A,p+1,high);
    }
}

int main()
{
    int A[]={5,8,3,4,1,9,3,2,6};
    quicksort(A,0,8);

    for(int i=0;i<9;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;

}