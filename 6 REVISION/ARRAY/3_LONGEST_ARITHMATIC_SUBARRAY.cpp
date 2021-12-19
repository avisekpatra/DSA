#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int n)
{
    int size=2;  //current ap size
    int diff=arr[0]-arr[1]; //current differnce we got
    int pd=diff; //previous differnce
    int i=2;  //for iteration ,starting from 2 as we have alredy done a[0]-a[1] so..
    int max_size=INT_MIN; //the max size ans
    
    while (i<n)
    {
       diff=arr[i-1]-arr[i];  //first find the differnce 
       if(pd==diff) //checking if the current diffence is matching with previous then it is continious
       {
        size++; //so size increases
       max_size = max(max_size,size);  //and also we update the max size
       }
       else  //if the current diffence is not matching then 
       {
       pd=diff;  //now we will update the previous diffence and 
       max_size= max(max_size,size); //aslo update the max size
       size=2; //then re inisilise the size to 2 ,to find the length of the new longest ap subarray
       }

       i++; //after that just increament the i
    }

    return max_size;
}

int main()
{
    int arr[]={1, 7, 10, 15, 27, 29};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<fun(arr,n)<<endl;

    return 0;
}