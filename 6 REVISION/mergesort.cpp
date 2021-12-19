#include<iostream>
using namespace std;

void merge(int A[],int start,int end,int mid)
{
   int i=start;
   int j=mid+1;

   int k=0;
   int B[end+1];

   while (i<=mid && j<=end)
   {
       if(A[i]<A[j])
       {
           B[k]=A[i];
           i++;
           k++;
       }
       else
       {
           B[k++]=A[j++];
       }
       
   }
   for( ;i<=mid;i++)
   {
       B[k++]=A[i];
   }
   
   for(;j<=end;j++)
   {
       B[k++]=A[j];
   }
   

   k=0;
   for(int i=start;i<=end;i++)
   {
     A[i]=B[k++];  
   }
   
}



void mergesort(int A[],int start,int end)
{
    if(start<end)
    {

        int mid=(start+end)/2;
        mergesort(A,start,mid);
        mergesort(A,mid+1,end);
        merge(A,start,end,mid);
    }
}


int main()
{
    int A[]={6,4,28,3,2,9};
    int n=sizeof(A)/sizeof(A[0]);
    mergesort(A,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}