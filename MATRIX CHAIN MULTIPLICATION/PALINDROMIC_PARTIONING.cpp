//a string is given we have to partion it in such a way all the ubstring forms are pallindromic in nature
//so we have to find the minimum no of the partioning
#include<bits/stdc++.h>
using namespace std;


//function to find the string is palindromic or not
bool isPalindrome(string str,int i,int j)
{
    if(i==j)//if only single charecter is there then it is aplindromic
    return true;

    if(i>j)//empty string
    return true;

   string rev="";
   for(int it=j;it>=i;it--)
   {
       rev+=str[it];
   }
   
   return rev==str;
}

int DP[1001][1001]; //this will be filled with -1 
//here i will be 0 and j will be str.length()-1

int minPartion(string str,int i,int j)
{
    if(i>=j) //if i==0 that is only one chrecter then no partion and i>j means no charecter so return 0
    return 0;

    //checking if the string from the renge i to j is a palindrome or not if yes then partioning is required
    if(isPalindrome(str,i,j))
    return 0;

    if(DP[i][j]!=-1)
    return DP[i][j];

    int min_res=INT_MAX;
    for(int k=i;k<j;k++)
    {
        if(DP[i][k]==-1)
        DP[i][k]=minPartion(str,i,k);

        if(DP[k+1][j]==-1)
        DP[i][k]=minPartion(str,k+1,j);

        int res= 1 + DP[i][k] + DP[k+1][j] ;
        if(res<min_res)
        min_res=res;
    }

    return DP[i][j]=min_res;

}


int main()
{
memset(DP,-1,sizeof(DP));
cout<<minPartion("geek",0,3)<<endl;
return 0;
}
