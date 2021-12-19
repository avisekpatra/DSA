#include<bits/stdc++.h>
using namespace std;

int sum_of_subarray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {    
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }

    return sum;
}

int main()
{
    int arr[]={1,2,0,7,2};
    cout<<sum_of_subarray(arr,5)<<" "<<endl;
    return 0;
}