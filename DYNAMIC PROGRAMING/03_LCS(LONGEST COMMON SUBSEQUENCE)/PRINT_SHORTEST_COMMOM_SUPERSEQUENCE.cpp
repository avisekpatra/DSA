#include<bits/stdc++.h>
using namespace std;

string print_scs(string str1,string str2)
{
    int len1=str1.length();
    int len2=str2.length();

    //filling the lcs table
    int DP[len1+1][len2+1];
    
    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                DP[i][j]= 1+ DP[i-1][j-1];
            }
            else
            {
                DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }

    //finding the lcs string
    string lcs="";
    int i=len1;
    int j=len2;
    while (i>0 && j>0)
    {
        if(str1[i-1]==str2[j-1])
        {
            lcs=str1[i-1]+lcs;
            i--;
            j--;
        }
        else
        {
            if(DP[i-1][j]>DP[i][j-1])
                i--;
            else
                j--;
        }
    }

    //now finding the scs by comparing
    int s1=0; //for str1;
    int s2=0; //for str2;
    int l=0; //for lcs
    int lcs_len=lcs.length();
    string scs="";

    while (s1<len1 && s2<len2 && l<lcs_len)
    {   //if all 3 char in the string get match then add it ance
        if(str1[s1]==lcs[l] && str2[s2]==lcs[l])
        {
          scs+=str1[s1];
          s1++;
          s2++;
          l++;
          continue;
        }
        //if charecter dont match with the lcs string then add it to the string
        if(str1[s1]!=lcs[l])
        {
          scs+=str1[s1];
          s1++;
        }
        //same for string 2 charecter not match the add it just
        if(str2[s2]!=lcs[l])
        {
            scs+=str2[s2];
            s2++;
        }
       
    }
    //if some letter get remains will be added here
    while (s1<len1)
    {
       scs+=str1[s1];
       s1++;
    }
    while (s2<len2)
    {
        scs+=str2[s2];
        s2++;
    }

    return scs;
  
}


int main()
{
    cout<<print_scs("abcda","bdqa")<<endl;
    return 0;
}