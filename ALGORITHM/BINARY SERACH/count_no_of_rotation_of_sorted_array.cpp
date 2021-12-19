#include<iostream>
#include<climits>
using namespace std;

int minimumElementIndex(int arr[],int n)
{
    int start=0;
    int end=n-1;
    //if the array is already sorted
    if(arr[start]<=arr[end])
    return 0;

    //now we are finding the minimum element in the rotated cyclic sorted array
    //variabel to store the index of the minimum elemnt
    int min_index;

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        //checking if the elemnt at mid element left is smaller than it then the right no is the minimum no
        //the reason i am writing this codition 1st to avoid the case to check where we have to check if mid-1 elemnt is igger cause if index is 0 then it will give index out of bound exception
        if(arr[mid]>arr[mid+1])
        {
            return mid+1;
        }

        //checking if the elemnnt at the left is bigger than the elemnt at mid then the elemnt at the mid is the minimu element
        else if(arr[mid]<arr[mid-1])
        {
            return mid;
        }
        //if we didnt find the minimum elemnet using the mid index then it must lie in the unsort part
        //checking if the left part from mis is unsoted then we will perform binary search on that part
        else if(arr[start]>=arr[mid])
        {
            end=mid-1;
        }
        //checking if the right side is unsorted or not
        else if(arr[mid]>=arr[end])
        {
            start=mid+1;
        }
    }
    //if the loop is finsed
    return 0;
}
//funtion to find the no of rotations
int countRotation(int arr[],int n)
{
    int min_index=minimumElementIndex(arr,n);
    if(min_index==0 || n==1)
    return 0;

    return n-min_index;

}

int main()
{
    int a[]={1,3,4,5,6,7,0};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<minimumElementIndex(a,n)<<endl;
    return 0;
}