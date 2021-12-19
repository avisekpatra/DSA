#include<bits/stdc++.h>
using namespace std;

void duplicate(char str[])
{
int h=0; //we will create a int type variabel as it is 4 bytes and 32 bits which is what we need as alphabets are 26 and  and it is the closeset we can get
int x=0;
for(int i=0;str[i]!='\0';i++)
{
    x=1;
    x=x<<(str[i]-97); //we want to shift left 1 for those many times as the index we get in the alfhabert
    if((h & x)>0) //then we will check by masking taht is taking and of h and x and if it is >0 means some elemnt is there that if on that index is on or not ,if on then it means have duplicate
    cout<<str[i]<<" have duplicate\n";
    else
    h=h|x; //if not marked then we will mark it by merging that is by taking or of h and x
}
}


int main()
{
    char str[20]="i am batman";
    duplicate(str);
    return 0;
}