#include<iostream>
using namespace std;

//return the no of ways we can use the coins array to get the resultant sum 
//input coin[] array is given of diiferent type
//target value is given
//we can include multliple instance of a single coin 
//this is unbounded knapsack
//similar to the aquestion count the total no of subset sum problem of o1 knapsack variation

int coinChange1(int coin[],int n,int sum)
{
    //creating a DP array
    //n is the size of the array
    int DP[n+1][sum+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            //initialiasation of the tabulation always adviced to do it once
            if(i==0 && j==0)
            DP[i][j]=1;
            else if(i==0 && j!=0)
            DP[i][j]=0;
            else if(j==0 && i!=0)
            DP[i][j]=1;
            //coice based condition
            else if(coin[i-1]<=j)
            {              //include          //exclude
                DP[i][j]= DP[i][j-coin[i-1]] + DP[i-1][j];
            }
            else if(coin[i-1]>j)
            {    //not including
                DP[i][j]=DP[i-1][j];
            }
        }
    }

    return DP[n][sum];
}


int main()
{
    int c[]={1,2,3};
    int s=5;
    int n= sizeof(c)/sizeof(c[0]);
    cout<<coinChange1(c,n,s)<<endl;
    return 0;
}