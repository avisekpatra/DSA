#include<iostream>
using namespace std;

void swaping(int *A,int *B)
{
  int temp=*A;
  *A=*B;
  *B=temp;
}


//bubble sorting
void bubbleSort(int A[],int n)
{
  int flag;
for(int i=0;i<n-1;i++)
{
  flag=0;

  for(int j=0;j<(n-i-1);j++)
 {
  if(A[j]>A[j+1])
  {
    swaping(&A[i],&A[i+1]);
    flag=1;
  }
}

}
}

//insertion sort
void insertionsort(int A[],int n)
{
  int j;
  for(int i=1;i<n;i++)
  {
   j=i-1;
   int key=A[i];
   while (key<A[j] && j>=0)
   {
     A[j+1]=A[j];
     j--;
   }
   A[j+1]=key;
  }
}


//selection sort
void selectionsort(int A[],int n)
{
  int i,j,min;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(A[j]<A[m])
      m=j;
    }
    swaping(&A[min],A[i]);
  }
}

//quicksort
int partition(int A[],int low,int high)
{

  int pivot=A[low];
  int i=low;
  int j=high;
while (i<j)
{
  while (A[i]<=pivot)
  {
    i++;
  }
  while (A[j]>pivot)
  {
    j--;
  }
  if(i<j)
  swaping(A[i],A[j]);
}

swaping(A[low],A[j]);
return j;
}

void quicksort(int A,int l,int r)
{
  if(l<r)
  {
    int i=partition(A,l,r);
    quicksort(A,l,i-1);
    quicksort(A,i+1,r);
  }
}