#include<bits/stdc++.h>
using namespace std;

int lcs(string str1,string str2)
{
    int len1=str1.length();
    int len2=str2.length();

    //creating a table for tabulation
    int DP[len1+1][len2+1];

    //using this for loop we will fill the table
    //1st for loop for string 1
    for(int i=0;i<len1+1;i++)
    {
        //2nd for loop for string 2
        for(int j=0;j<len2+1;j++)
        {
            //initialisqation 
            //base case condition
            if(i==0 || j==0)
            DP[i][j]=0;
            //is charecter is matching in both the string then 
            //we will add 1 as we have include and add the length we have found till the previus size/elemnt
            else if(str1[i-1]==str2[j-1])
            {
             DP[i][j]= 1+ DP[i-1][j-1];
            }
            //if no match found
            //then we will find the max of 
            //excluding 1 char of str1 and str2
            else 
            {
                DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }
    //last block have the answer
    return DP[len1][len2];
}

int main()
{
    string s1="abcdhgfhx";
    string s2="bsdkhjdcswddppphrx";

    cout<<lcs(s1,s2)<<endl;

    return 0;
}