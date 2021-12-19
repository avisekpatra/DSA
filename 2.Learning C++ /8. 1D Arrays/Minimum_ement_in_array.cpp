#include<iostream>
using namespace std;

int min(int arr[],int n)
{
    int min = INT_MAX;   //the Maxium value  it is a built in constant in C++
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        
    }

    return min;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"the minium element is "<<min(a,n);

    return 0;
}
