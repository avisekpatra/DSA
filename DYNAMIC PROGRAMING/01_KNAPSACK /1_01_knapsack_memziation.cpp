#include<bits/stdc++.h>
using namespace std;

/*
inputs :
int n is the no of object
int weight[n] weight of the objects stored in the array 
int value[n] ,have the value of the objects 
int capacity ,that is the capacity of the knapsack
int DP[n+1][n+1] a 2d matrix of size (n+1)*(n+1) for memoziation that is to store the result of the functios for latter use 
the dp matrix will be decclare global or declared static as the knapsack funtion is rcysrsive
*/

//declaring a 2d matrix to strore the value got by the fuctions(memoziation)
int DP[4][51]; //the size of the matix is the comstrain givven in the question for n and capacity
int maxOf(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

int knapsack(int weigth[],int value[],int n,int capacity)
{
    //base condition is 
    //when there is no elemnt left to select then profit 0 will be added
    //when there is no more free vacant in the bag that is the capacity is 0 here also profit 0 will be added
    if(n==0 || capacity==0)
    return 0;

    //checking if the function call which we are in now is already called and stored value in the DP matric 
    //if stored then we will just return that value
    if(DP[n][capacity]!=-1)
    {
        return DP[n][capacity]; //instead of procesing the program again we will return the value
    }
    
    
    //now checking if the object we chose have weight less than or equal 
    int i=n-1; //we wwill start from the leftside of the array as each recursive call we will be reducing the the no of elemnt will wxclude the 
    if(weigth[i]<=capacity)
    {
        //here 2 cases are there that we can euther chose the object and compare it with case where we didnt inclue the that elemnt
        int include = value[i]+knapsack(weigth,value,n-1,capacity-weigth[i]); //when we include the object to the knapsack the we will add the value of the object to the profit then we call the rcursive function to give the profit of the rest of the object that is for n-1 objects and also the capacity of the ba decresed by adding the weight capacity- weight[n-1]
        int not_include= knapsack(weigth,value,n-1,capacity); //when we dont include the object the we will only call for the function to give the profit for thr rest of the object so only no of object is changed in teh function call
        
        //then we will store the max of them ,and store it in the DP matrix and return that value 
        return  DP[n][capacity]= maxOf(include,not_include);; 
    }

    //when the weight of object is greater than the capacity
    else if(weigth[i]>capacity) 
    {
        return DP[n][capacity]=knapsack(weigth,value,n-1,capacity); //we will not include that objct recursivly ask the profit from the rest of the object   
    }

}

int main()
{
    int n=3;
    int capacity=50;
    /*
    cout<<"Enter the no of onject\n";
    cin>>n;
    cout<<"Eneter the capacity of the kanpsac\n";
    cin>>capacity;
    */


    int weight[]={10,20,30};
    int value[]={60,100,120};

    //initially filling the DP matrix will all elemnt as -1 
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<51;j++)
        {
            DP[i][j]=-1;
        }
    }

    int profit=knapsack(weight,value,n,capacity);
    cout<<"the maximum profit will be "<<profit<<endl;

    return 0;
}


