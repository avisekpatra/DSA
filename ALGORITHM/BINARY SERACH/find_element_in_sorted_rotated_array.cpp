#include<iostream>
using namespace std;


//function to find the minimu elemnt in the sorted rotaed array
int minimumElementIndex(int arr[],int n)
{
    int start=0;
    int end=n-1;
    if(arr[start]<=arr[end])
    return 0;

    while (start<=end)
    {
        int mid= start + (end-start)/2;

        if(arr[mid]>arr[mid+1])
        {
         return mid+1;
        }
        else if(arr[mid]<arr[mid-1])
        {
            return mid;
        }
        else if(arr[start]>=arr[mid])
        {
            end=mid-1;
        }
        else if(arr[mid]>=arr[end])
        {
            start=mid+1;
        }
    }

}

int binarySearch(int arr[],int start,int end,int key)
{
    while (start<=end)
    {
       int mid=start + (end-start)/2;
       if(arr[mid]==key)
       {
           return mid;
       }
       else if(key>arr[mid])
       {
           start=mid+1;
       }
       else if(key<arr[mid])
       {
           end=mid-1;
       }
    }

    return -1;
}

//function to return the index of an elemnt in the sorted rotaed array
int findElementInSortedRotated(int arr[],int n,int key)
{
    if(n>=1)
    {
       if(n==1 && arr[0]==key)
       return 0;

       //we will find the minimum element index in the sorted rotated array 
       //then as these are divided into 2 parts so i will perform binary search on both of the part

       int min_index=minimumElementIndex(arr,n);

       //for 1stpart
       int part1=binarySearch(arr,0,min_index-1,key);
       //for 2nd part
       int part2=binarySearch(arr,min_index,n-1,key);

       if (part1!=-1)
       return part1;

       if(part2!=-1)
       return part2;
       
       else
       return -1;
    }

    return -1;
}


int main()
{
    int a[]={11,12,15,18,2,5,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int i= findElementInSortedRotated(a,n,2);
    if(i==-1)
    cout<<"not found\n";
    else
    cout<<"found at "<<i<<endl;
    
    return 0;
}