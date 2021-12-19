#include<iostream>
#include<string>
using namespace std;

//optimised version of lcs using memoziation

//we will create the 2d DP array of the size constraint given in the question
int DP[100][100];
//we can also create the array od size len1+1 and len2+1

int lcs(string str1,string str2,int len1,int len2)
{
   if(len1==0 || len2==0)
   {
       return 0;
   }

   if(DP[len1][len2]!=-1)
   return DP[len1][len2];

   if(str1[len1-1]==str2[len2-1])
   {
       return DP[len1][len2] = 1 + lcs(str1,str2,len1-1,len2-1);
   }
   else
   {
   return DP[len1][len2]= max(lcs(str1,str2,len1-1,len2),
                              lcs(str1,str2,len1,len2-1));
   
   }
   
   return DP[len1][len2];

}

int main()
{
    string s1="abcdhgfhx";
    string s2="bsdkhjdcswddppphrx";
    int l1=s1.length();
    int l2=s2.length();
    memset(DP,-1,sizeof(DP));
    cout<<lcs(s1,s2,l1,l2)<<endl;

    return 0;
}