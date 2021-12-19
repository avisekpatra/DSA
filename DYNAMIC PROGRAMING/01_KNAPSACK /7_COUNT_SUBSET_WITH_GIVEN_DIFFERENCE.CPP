#include<iostream>
using namespace std;

int count_Subset(int arr[],int n,int diff)
{
   /*
     s1>s2
     s1-s2=diff
     s1+s2=sum
     s1=sum-s2;
     sum-s1-s1=diff
     s1=(sum-diff)/2
   */
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum=sum+arr[i];
  }

  int s1 = (sum+diff)/2;

  int DP[n+1][s1+1];
   for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s1+1;j++)
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

    return DP[n][s1];

}

int main()
{
    int a[]={1,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<count_Subset(a,n,1)<<endl;
    return 0;
}