#include<iostream>
using namespace std;



int maxim(int a=0,int b=0,int c=0)
{
    return a>b && a>c ? a : b>c? b : c;
}

int main()
{
    cout<<maxim()<<endl;
    cout<<maxim(1)<<endl;
    cout<<maxim(2,4)<<endl;
    cout<<maxim(1,2,3)<<endl;
}

