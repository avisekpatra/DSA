#include<bits/stdc++.h>
using namespace std;

int DP[30][30];

int lcs(string str1,string str2,int len1,int len2)
{ 
    //if any of the string length is 0 or becomes zero then no commnon can be found so return 0
    if(len1==0 || len2==0)
    return 0;

    //when 2 charecter of the string are equal
    //in recursive call we will start from the end index as we will be passing reducing length each recursive call
    if(str1[len1-1]==str2[len2-1])
    return 1+lcs(str1,str2,len1-1,len2-1);
    else
    {               
        return max(lcs(str1,str2,len1-1,len2),lcs(str1,str2,len1,len2-1));
    } 
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