#include<bits/stdc++.h>
using namespace std;

//int n no of objects
//int capacity capacity of the knapsack

int max_of(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int knapsack(int weight[],int value[],int n,int capacity)
{
    int DP[n+1][capacity+1];//creating matrix for top down aproach
  
    //step-1 is initialization whixh is filling the resul based on the base condition of the recursive fuction
    int i;
    int w;

    for(i=0;i < n+1;i++)
    {
        for(w=0;w < capacity+1;w++)
        {
        
        //initialisiting 
                             //in recursive function base condition was
         if(i==0 || w==0)    //if(n==0 || capacity==0) 
         {
             DP[i][w]=0;    //return 0
         }

         //filling the rest array by choice based condition
                
                else if(weight[i-1]<=w)
                {
                    DP[i][w]= max_of(value[i-1] +DP[i-1][w-weight[i-1]],
                                      DP[i-1][w] );
                }
            
                else if(weight[i-1]>w)
                {
                    DP[i][w]= DP[i-1][w];
                }
        }     
    }

    //now the total profit will be at the DP[n][capacity]
    return DP[n][capacity];
    
}

int main()
{
    int n=3;
    int wt[]={10,20,30};
    int val[]={60,100,120};
    int W=50;

    int profit=knapsack(wt,val,n,W);
    cout<<"the maximum profit is : "<<profit<<endl;
    return 0;
}