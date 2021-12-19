#include<iostream>
#include<string>
#include<climits>
using namespace std;

//find the length of the longest substring

int LCSubstring(string str1,string str2)
{
    int len1= str1.length();
    int len2= str2.length();

    int DP[len1+1][len2+1];
    

    for(int i=0;i<len1+1;i++)
    {
        for(int j=0;j<len2+1;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;

            else if(str1[i-1]==str2[j-1])
            {
            DP[i][j] =1 + DP[i-1][j-1];
            }

            //if an element is not matching then fill it with 0 causing we are not includeing it
            else
            DP[i][j]=0;
        }
    }

    //now we will find the max no in the array
    int max=INT_MIN;
    for(int i=0;i<len1+1;i++)
    {
    for(int j=0;j<len2+1;j++)
    {
        if(DP[i][j]>max)
        max=DP[i][j];
    }
    }
    //then return it
    return max;
    
}

int main()
{
    string s1="aabs";
    string s2="absb";
    cout<<LCSubstring(s1,s2)<<endl;

    return 0;
}