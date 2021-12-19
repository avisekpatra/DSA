#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[]="MEDIACAL";
    char str2[]="DECIMAELA";

    int h[26]={0};
    bool check=1;
    //finding the length of the strings
    int len1=0;
    for(;str1[len1]!='\0';len1++);
    int len2=0;
    for(;str2[len2]!='\0';len2++);
    
    if(len1==len2)
    {
    //put a check condition that the length of the strings are equal or not
    for(int i=0;str1[i]!='\0';i++)
    {
        h[str1[i]-65]++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        h[str2[i]-65]--;
        if(h[str2[i]-65]<0)
        {
            check=0;
            break;
        }

    }
    if(check)
    cout<<"anagarm\n";
    else
    cout<<"not anagram\n";
    return 0;
    }
    
    else
    cout<<"not anagram\n";

}