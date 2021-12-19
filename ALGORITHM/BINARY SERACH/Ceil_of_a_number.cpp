#include<iostream>
using namespace std;

int ceilOfNumber(int arr[],int n,int key)
{
    //checking if the ceil exist in the array or not cause if the key is the greater than the greatest number from the array then ceil dontexist
    if(key > arr[n-1])
    return -1;
    //we will now do the binary search
    int start=0;
    int end=n-1;
    int mid;
    while (start<=end)
    {
        mid= (start+end)/2;
        if(key==arr[mid])
        {
            return arr[mid];
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

    //if the key don texist the after the condition of the while loop get violeted 
    //that is now start is >end then start is pointing to the elment which is the next greater elemnt than the key in the array
    return arr[start];
    
}

int main()
{
    int a[]={2,3,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<endl<<ceilOfNumber(a,n,4)<<endl;
    return 0;
}