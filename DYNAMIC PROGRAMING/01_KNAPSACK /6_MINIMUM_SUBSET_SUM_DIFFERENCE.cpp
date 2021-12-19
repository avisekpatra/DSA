//we will find the minimum differece of subset from a given array


#include<iostream>
#include<climits>
using namespace std;

/*
s1+s2=range (sum of all elements in the given array)
s2>=s1
s2=range-s1;
and 
s2-s1 == minimun(difference) objective
range-s1-s1=minimu
range-2s1=minimum
so we will find the subset sum table for the n and sum
then in the last row that is in n row we will check till sum/2 as s1<=s2
so minimum difference is s1==s2 then differen is zer0
and <=sum/2 as if s will be sum/2 then it will be greater than s1 so we will only check till sum/2
*/

int minimum_subset_difference(int arr[],int n)
{
    int sum=0;
    //finding the sum or range 
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    int range=sum; //range of subset sum it will be from 0 till sum
    //now we will perform subset sum now

    bool DP[n+1][sum+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0 && j==0)
            DP[i][j]=true;
            else if(i==0 && j)
            DP[i][j]=false;
            else if(j==0 && i)
            DP[i][j]=true;
            else if(arr[i-1]<=j)
            {
                DP[i][j]= DP[i-1][j-arr[i-1]] || DP[i-1][j];
            }
            else if(arr[i-1]>j)
            {
                DP[i][j]= DP[i-1][j];
            }
        }
    }
     
        int min=INT_MAX;
        for(int i=0;i<((sum/2)+1);i++)
        {
           if(DP[n][i]==true)
           {
               if((range-2*i)<min)
               min=range-2*i;
           }
           
        }

        return min;

}

int main()
{
    int a[]={1,6,16,7};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<minimum_subset_difference(a,n)<<endl;

    return 0;
}