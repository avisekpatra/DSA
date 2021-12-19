#include<iostream>
using namespace std;

bool isSubset(int arr[],int sum,int n)
{
    
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

    return DP[n][sum];

}
int main()
{
    int a[]={3,34,4,12,5,2};
    int sum=30;
    int n=6;
    if(isSubset(a,sum,n))
        cout<<"yse it exist\n";
    else
    cout<<"not exits\n";
    return 0;
}