#include<iostream>
using namespace std;

int countSubset(int arr[],int n,int sum)
{
    int DP[n+1][sum+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {   
            //inilitialisation of the table 
            if(i==0 && j==0)
            {
                DP[i][j]=1;
            }
            else if(i==0 && j!=0)
            {
                DP[i][j]=0;
            }
            else if(j==0 && i!=0)
            {
                DP[i][j]=1;
            }
            //choice based condition 
            //if the num in the array is less than the sum then we had 2 optiom 1 to include and not to include
            else if(arr[i-1]<=j)
            {             //include            //not include
                DP[i][j]= DP[i-1][j-arr[i-1]] + DP[i-1][j];        //lets say we have include the elemnt then we got m subsets which are equal to the target sum and then we had the case where we dont include the element then lets say we got m1 subset which are equal to the sum so now total no of subsets are m+m1 na so we adding the resulst
            }
            else if(arr[i-1]>j)
            {
                DP[i][j]= DP[i-1][j];
            }
        }
    }

    return DP[n][sum];
}


int main()
{
    int a[]={1,2,1};
    int n =sizeof(a)/sizeof(a[0]);
    cout<<countSubset(a,n,3)<<endl;
    return 0;
}