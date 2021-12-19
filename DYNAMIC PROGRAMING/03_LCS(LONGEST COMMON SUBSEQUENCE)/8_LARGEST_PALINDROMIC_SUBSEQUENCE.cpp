#include<bits/stdc++.h>
using namespace std;

string reverse_string(string str)
{
    string rev="";
    int n= str.length();
    for(int i=0;i<n;i++)
    {
        rev=str[i]+rev;
    }
    return rev;
}

//Longest palindromic subsequnece 
int LPS(string str1)
{
    //finding the reverse of the string
    string str2= reverse_string(str1);
    int len= str1.length();
    //we dont need to find the length of the 2nd string as it is same as first
    
    //now we will find the LCS(length of the longest common subsequnce)
    //as LCS of the string and reverse of the string is the LPS

    int DP[len+1][len+1];
    for(int i=0;i<=len;i++)
    {
        for(int j=0;j<=len;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                DP[i][j]= 1+ DP[i-1][j-1];
            }
            else
            DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
        }
    }
      
    return DP[len][len]; //now this wiil return the length of the LPS
}


//we can also print the longest subsequnce string the way we have printed the LCS string




int main()
{
    cout<<LPS("agbcba")<<endl;  //expected output was 5
    return 0;

}