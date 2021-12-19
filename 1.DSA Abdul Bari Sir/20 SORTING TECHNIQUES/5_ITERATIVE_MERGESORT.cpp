#include<iostream>
using namespace std;

//function to mearge 2 list fromeed internally in a list 
//and that list is deivided by a mid elemnt

void internalmerge(int A[],int low,int mid,int high)
{
    //for 1st list
    int i=low; //starting point and the list end a the index mid 
    int j=mid+1 //for list 2 it is the strating point  and the list end at the index high
    int B[high+1]; //creating another array of size same as A[]
    int k=0; //for array B
    while (i<=mid && j<=high)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    //for left overs
    //for Array A
    for( ;i<=mid;i++)
    {
        B[k++]=A[i];
    }
    //for Array B
    for( ;j<=high;j++)
    {
        B[k++]=A[j];
    }
    //after the sorted list is in B[] we will copy it to A[]
    for(int i=0;i<=high;i++)
    {
        A[i]=B[i];
    }
}


//now here the iterative function for the merge sort 

void IMergeSort(int A[],int n)
{
int p; //for no of pass
int l;  //low
int h;  //high
int mid; //mid
int i;  //for internal traversing list by list
//first for is for passes
for(p=2;p<=n;p=p*2)
{
    for(i=0;i+p-1<n;i=i+p)
    {
        l=i;
        h=i+p-1;
        mid=(l+h)/2;
        internalmerge(A,l,mid,h);
    }
}
if(p/2<n) //if the array have 
 internalmerge(A,0,p/2)-1,n);
}