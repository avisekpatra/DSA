#include<iostream>
#include<climits>
using namespace std;

//here i=0 and j=n-1 where n is the size of the array
int mcm(int arr[],int i,int j)
{
    //base case
    if(i>=j)
    return 0;

    int min_operation=INT_MAX:
    for(int k=i;k<=j-1;k++)
    {         //left side      //right side   
      int operation = mcm(arr,i,k) + mcm(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];

      if (min_operation < operation)
         min_operation = operation;
    }

    return min_operation;
}