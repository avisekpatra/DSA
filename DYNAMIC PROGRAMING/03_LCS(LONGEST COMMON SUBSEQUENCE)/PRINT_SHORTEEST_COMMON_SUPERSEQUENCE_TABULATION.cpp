#include<iostream>
#include<string>
using namespace std;


string scs(string str1,string str2)
{
    int len1= str1.length();
    int len2=str2.length();

    int DP[len1+1][len2+1];

    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                DP[i][j]= 1+DP[i-1][j-1];
            }
            else
            {
                DP[i][j]= max(DP[i-1][j] , DP[i][j-1]);
            }
        }
    }

    int i=len1;
    int j=len2;
    string scs="";
    while (i>0 && j>0)
    {
      if(str1[i-1]==str2[j-1])
      {
          scs.push_back(str1[i-1]);
        //scs=str1[i-1]+scs;
        i--;
        j--;
      }
      else
      {
          if(DP[i-1][j] > DP[i][j-1])
          {
             //scs=str1[i-1]+scs;
             scs.push_back(str1[i-1]);
             i--;
          }
          else
          {  
             //scs=str2[j-1]+scs;
             scs.push_back(str2[j-1]);
             j--;
          }
      }
    }
    while (i>0)
    {
        //scs=str1[i-1]+scs;
        scs.push_back(str1[i-1]);
        i--;
    }

    while (j>0)
    {
        //scs=str2[j-1]+scs;
        scs.push_back(str2[j-1]);
        j--;
    }
    
    return scs;
}


int main()
{
   cout<<scs("abcda","bdqa")<<endl;
    return 0;
}
