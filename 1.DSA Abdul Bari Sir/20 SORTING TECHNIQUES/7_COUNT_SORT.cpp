#include<bits/stdc++.h>
using namespace std;

void countSort(int A[],int n)
{
    int max=INT_MIN; //for the size of the count array
    int min=INT_MAX; //we can use this as the starting index of the count array may save some comparision
    //finding the max and min elemnt in the array
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
        
        if(A[i]<min)
        min=A[i];
    }

    //creating the count array
    int size=max+1;
    int COUNT[size];  
    //filling it with zero initially
    for(int i=min;i<size;i++)
    {
        COUNT[i]=0;
    }
    
    //now filling the count array with the number of elemnt and also filling how many time the no is repeated present in the array which we are going to sorted 
    for(int i=0;i<n;i++)
    {
        COUNT[A[i]]++;
    }

    int ind=0; //this for filling the A[] array with the sorted format so we use this iterator
    //here we will check index of count array that is the no in the A[] array is there and how many time based o this we will fill the original array with the sorted array
    for(int i=min;i<size;i++)
    {   
        //if COUNT[i] is > 0 means the elemnt is presnt in the array
        if(COUNT[i]>0)
        {   
            //if the elemnt is present more than one time so to fill the A[] acordingly
            for(int j=1;j<=COUNT[i];j++)
            {
                A[ind]=i;
                ind++;
            }
        }
    }

}

int main()
{
    int A[]={1,1,6,6,3,2,6,9,7,2,9,4,3,9};
    int n=sizeof(A)/sizeof(A[0]);
    
    countSort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}