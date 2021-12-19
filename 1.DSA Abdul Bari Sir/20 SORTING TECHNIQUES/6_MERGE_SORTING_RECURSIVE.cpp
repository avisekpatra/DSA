#include<iostream>
using namespace std;

void internalMerge(int A[],int low, int mid,int high)
{
    int i=low;
    int j=mid+1;
    int B[high+1];
    int k=low;
    while (i<=mid && j<=high)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++]; 
    }
    for(;i<=mid;i++)
    {
        B[k++]=A[i];
    }
    for(;j<=high;j++)
    {
        B[k++]=A[j];
    }

    for(int i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
    
}


//merge sort algorithm recursivly
void MergeSorting(int A[],int low,int high)
{
    if(low<high)  //checking if the list have more then 1 elemnts 
    {
        int mid=(low+high)/2; //we will find the mid index and divide the list into 2 part using the mid 
        //part 1 the lest side and we are sorting the left side using recursion
        MergeSorting(A,low,mid); 
        //part 2 the right side we are sorting the right side using recursion
        MergeSorting(A,mid+1,high);

        //after sorting the left and right part of the array then we will merge them using this fuction
        internalMerge(A,low,mid,high);
    }
}

int main()
{
    int A[]={8,3,7,4,9,2,7,6,5,1,1};
    int low=0;
    int high= sizeof(A)/sizeof(A[0])-1;
    MergeSorting(A,low,high);
    for(int i=0;i<=high;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}