#include<iostream>
using namespace std;

char str2[6];
void create(char str1[],int n,int i)
{
    static int j=0;
    
    if(i==n)
    return;

    if(str1[i]!='a')
    {
      str2[j++]=str1[i];
    }

    create(str1,n,i+1);
    
}
int main()
{
    char str1[]="baccad";
    create(str1,6,0);

    for(int i=0;i<6;i++)
    {
        cout<<str2[i];
    }
    cout<<endl;

    return 0;
}