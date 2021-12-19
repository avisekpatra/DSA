#include<bits/stdc++.h>
using namespace std;


string reverse_str(string str)
{
    string rev="";
    for(int i=0;i<str.length();i++)
    {
        rev=str[i]+rev;
    }
    return rev;
}

int min_delete_to_LPS(string str)
{
    //here we will find the the length of the LPS and subtract it with the original length of the string
    //int min_delete= str.length()- LPS

    //findingg the LPS
    string rev_str=reverse_str(str);
    int len= str.length();

    int DP[len+1][len+1];

    for(int i=0;i<=len;i++)
    {
        for(int j=0;j<=len;j++)
        {
            if(i==0 || j==0)
            {
                DP[i][j]=0;
            }
            else if(str[i-1]==rev_str[j-1])
            {
                DP[i][j]= 1+ DP[i-1][j-1];
            }
            else
            {
                DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }

    //so DP[len][len] will have the length of the LPS

    //now to find the minimu no of charecter needed to make the string a palniderom is
    //dleting those letter which is not common in string and reverse of thet string
    //that is the length of the string - length of the LPS

    return len-DP[len][len];

}