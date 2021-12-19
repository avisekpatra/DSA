#include<iostream>
using namespace std;

int IterariveBinarySearch(int A[],int n,int key)
{
    int i=0;
    int j=n-1;
    int mid;

    while (i<=j)
    {
        mid=(i+j)/2;
    
        if(A[mid]==key)
        {
           return mid;
        }
        else if(A[mid]>key)
        {
            i=mid+1;
        }
        else if(A[mid]<key)
        {
            j=mid-1;
        }
    }
     
    return -1;   
}



int RecursiveBinarySearch(int arr[],int i,int j,int key)
{
    int index=-1;
    
    if(i>j)
    return index;

    int mid=(i+j)/2;
    
   
    if(key==arr[mid])
    return mid;


    else if(key<arr[mid])
    index=RecursiveBinarySearch(arr,mid+1,j,key);
    
    else if(key>arr[mid])
    index=RecursiveBinarySearch(arr,i,mid-1,key);

    return index;
    
}


int main()
{          //0,1,2,3,4,5,6 
    int A[]={9,7,6,4,3,2,1};
    int n= sizeof(A)/sizeof(A[0]);
    //int index= RecursiveBinarySearch(A,0,n-1,3);
    int index=IterariveBinarySearch(A,n,4);
    if(index==-1)
    cout<<"not found\n";
    else
    cout<<"found at "<<index<<endl;
    return 0;
}