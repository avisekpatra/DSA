/*
there is an array is given ,and we have to find thatis that array can be divided into 2 equal subset 
subset sum is equal
*/
#include<iostream>
using namespace std;


bool subset_sum_partition(int arr[],int n)
{
    
    //finding the sum of the array
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    if(sum%2!=0)  //if the sum of the elemnts of the array is not even then it can not divided into 2 e qual parts in any way
    {
        return false;
    }
    
    sum=sum/2;  //now we will update the sum to half
    //this is similar to the target subset sum problem and if we find that is there any sbset exist for the half of the sum then yes it can be partitioned into 2 equal part

    //creating a array
    bool DP[n+1][sum+1];

   for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            //initlailise the table part
            if(i==0 & j==0)
            DP[i][j]=true;
            else if(i==0 && j!=0)
            DP[i][j]=false;
            else if(i!=0 && j==0)
            DP[i][j]=true;
            
            //if we include the elemnt
            else if(arr[i-1]<=j)
            {
                DP[i][j]= (DP[i-1][j-arr[i-1]] || DP[i-1][j]);
            }
            else if(arr[i-1]>j)
            {
                DP[i][j]=DP[i-1][j];
            }
         }
    }

    if(DP[n][sum]) //if subset exist of the half of sum then yes partion is possible
    return true;
    else 
    return false;
}

int main()
{
    int A[]={1,5,11,5};
    int n=sizeof(A)/sizeof(A[0]);
    if(subset_sum_partition(A,n))
    cout<<"yes can be divided into 2 equal part\n";
    else
    cout<<"no can not be divide \n";
    return 0;
}