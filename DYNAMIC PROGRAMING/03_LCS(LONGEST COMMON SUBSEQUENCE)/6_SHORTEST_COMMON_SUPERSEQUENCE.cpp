#include<bits/stdc++.h>
using namespace std;

//function to find the maxmimum length of the lcs
int length_lcs(string str1,string str2)
{
    int l1=str1.length();
    int l2=str2.length();

    int DP[l1+1][l2+1];
    
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(str1[i-1]==str2[i-2])
            {
                DP[i][j]=1+DP[i-1][j-1];
            }
            else
            {
                DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }
    return DP[l1][l2];
}

//SCS == SHORTEST COMMOM SUPERSEQUENCE
int SCS(string str1,string str2)
{
    int l1=str1.length();
    int l2=str2.length();

    //by brute force max length supersquence possible
    int maxCS=l1+l2;

    int common=length_lcs(str1,str2);

    //the length of the shortest common supersequnce is the 
    //the (max string that is adding the 2 string) - (all matching letter as they are included twice)
    return maxCS-common;

}


int main()
{
    int l= SCS("abhsjf","abhsjf");
    cout<<l<<endl;
    return 0;
}