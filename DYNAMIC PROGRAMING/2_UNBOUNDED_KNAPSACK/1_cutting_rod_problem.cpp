#include<iostream>
using namespace std;

/*
there is a rod of length l is given
and array which have the value of rods based on length from 1 to l
like for length 1 some value is given and so on...
objective is to find the max profit by cutting the rod into picees
i have the freedom to cut the rod in any size and of any erepeatation 
that is i can chose to incllude the rod of same size 
remeber legtnth range is from 0 to l 
*/

//knapsack problem
//given an array for price[],int length of the rod
//noramaly the legth of the array is same as the legth
//this question resambels to 0/1 kanpsack
//in 0/1 knapsack array for weight is given ,array for value is given ,and a capacity of the knapsack is given
//and we are allowed to chose only one instance of the object

//cutting rod problem
//here also we can see that a length is given(similar to capacity)
//an array with price[] (value[] array in 0/1 knapsack)
//and we have the choce to split the rod into any size from 0 to length (this is resembeling weight array)
//but the only difference is we can add the same size rod as many time we can 
//that is multiple instances

int maxof(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
        //value array     capacity   no of lengths
int cuttingrod(int price[],int length)
{
    int size[length];
    for(int i=0;i<length;i++)
    {
        size[i]=i+1;
    }

    //same cause we are checking length no of sizes with length no of lengths
    int DP[length+1][length+1];

    for(int i=0;i<length+1;i++)
    {
        for(int j=0;j<length+1;j++)
        {
            //initialisation
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(size[i-1]<=j)
            {                    //if we chose this size           //ignore this size
                DP[i][j]= maxof( price[i-1] + DP[i][j-size[i-1]] , DP[i-1][j]);
            }
            else if(size[i-1]>j) 
            {
                DP[i][j]= DP[i-1][j];
            }
        }
    }

    return DP[length][length];

}

int main()
{
    int p[]={1,5,8,9,10,17,17,20};
    int l=8;
    cout<<cuttingrod(p,l)<<endl;
    return 0;
}
