//target sum leetcode 494

#include<iostream>
using namespace std;

int countTargetSum(int arr[],int n,int sum)
{
    int sumAll=0;
    for(int i=0;i<n;i++)
    {
        sumAll+=arr[i];
    }

    int subset1_sum= (sumAll+sum)/2;

    int DP[n+1][subset1_sum+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<subset1_sum+1;j++)
        {
            if(i==0 && j==0)
            DP[i][j]=1;
            else if(i==0 && j!=0)
            DP[i][j]=0;
            else if(j==0 && j!=0)
            DP[i][j]=1;
            else if(arr[i-1]<=j)
            {
                DP[i][j]= DP[i-1][j-arr[i-1]] + DP[i-1][j];
            }
            else if(arr[i-1]>j)
            {
                DP[i][j]= DP[i-1][j];
            }
        }
    }

    return DP[n][subset1_sum];

}


int main()
{
    int a[]={1,1,1,1,1};
    int sum=3;
    int n= sizeof(a)/sizeof(a[0]);
    cout<<countTargetSum(a,n,sum)<<endl;  
    return 0;
}