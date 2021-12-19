#include<bits/stdc++.h>
using namespace std;

int h[122];
void duplicate(char str[])
{
    for(int i=0;i<20;i++)
    {
        h[str[i]]++;
    }

    for(int i=97;i<=122;i++)
    {
        if(h[i]>1)
        {
            // char c=i;  or we can type cast
            cout<<char(i)<<" have "<<h[i]<<" duplicates\n";
        }

    }


}

int main()
{
    char str[20]="i am batman";
    h[i]={0};
    cout<<endl;
    duplicate(str);
    cout<<endl;
    return 0;
}
