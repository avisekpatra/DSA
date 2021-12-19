#include<iostream>
using namespace std;

bool isAnagram(char str1[],int n,int str2[],int m)
{

    if(n!=m)
    return false;
    
    int i;int j;
    int hash[128];
    //65 to 90 A  
    //97 to 122
    for(int i=0;i<128;i++)
    {
        hash[i]=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str1[i]==str2[j])
            hash[]
        }
        if(i==n-1)
        return false;
    }
    return true;   
}

int main()
{
    char s[]="bad";
    char s2[]="dab";
    cout<<isAnagram(s,3,s2,3);
    return 0;
}
