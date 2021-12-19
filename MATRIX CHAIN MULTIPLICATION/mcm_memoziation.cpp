#include<bits/stdc++.h>
using namespace std;

//we will create an 2d matrix to store the results of the function calls so that we can use it latter
//initially it will be filled with -1
int DP[100][100];

int mcm(int arr[],int i,int j)
{
    if(i>=j)
    return 0;

    if(DP[i][j]!=-1)
    return DP[i][j];
    
    int min_res=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int res=mcm(arr,i,k) + mcm(arr,k+1,j)+ arr[i-1]*arr[k]*arr[j];
        if(res<min_res)
        min_res=res;
    }

    return DP[i][j]=min_res;
}

int main()
{
    
    for(int i=0;i<100;i++)
    {
    for(int j=0;j<100;j++)
    {
         cout<<DP[i][j]=-1;
    }
    }

    
    return 0;

}