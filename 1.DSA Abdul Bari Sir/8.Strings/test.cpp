#include<bits/stdc++.h>
using namespace std;
int h[26]={0};
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
bool isAnagram(char str1[],char str2[])
{
    if(length(str1)!=length(str2))
    return false;
    
    int i=0;
    while (str1[i]!='\0')
    {
       h[str1[i]-97]++;
    }
    int i=0;
    while(str2[i]!='\0')
    {
        if(h[str2[i]-97]>0)
        h[str2[i]]--;

        if(h[str2[i]]<0)
        return false;
    }
    return true;  

}

int main()
{
    char str1[]="aabhisssyyopp";
    Duplicate(str1);

}