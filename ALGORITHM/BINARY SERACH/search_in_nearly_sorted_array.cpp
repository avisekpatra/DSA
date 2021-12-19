#include<iostream>
using namespace std;

int searchInNearlySorted(int arr[],int n,int key)
{
    if(n==1 && arr[0]==key)
    return 0;

    int start=0;
    int end=n-1;

    while (start<=end)
    {
    int mid=start + (end-start)/2;
    //checking if present in this index
    if(arr[mid]==key)
    return mid;
    //int the previous index if there
    else if(mid+1<=n-1 && arr[mid+1]==key)
    return mid+1;
    //in the next index if there
    else if(mid-1>=0 && arr[mid-1]==key)
    return mid-1;
    //if not found in mid,mid-1,mid+1
    //if the key is greater then lies in the right side
    else if(key>arr[mid])
    {
        if(mid+2<=n-1)
        start=mid+2;   //increment by 2 as we have checked the mid +1 index
    }
    //else if key is smaller then lies in the left side
    else if(key<arr[mid])
    {
        if(mid-2>=0) //checking if the index after subtarcting 2 from mid not line in array bound index
        end=mid-2; //decrement by 2
    }

    }

    return -1;
}

int main()
{
    int a[]={5,10,30,50,40,60};
    
    cout<<searchInNearlySorted(a,6,50)<<endl;
    return 0;
}