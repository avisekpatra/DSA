#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}

int main()
{
    int x=10,y=20;
    int &p=x;
    int &q=y;

    swap(p,q); // this is same as swap(x,y)

     p++;
     cout<<x<<endl;

     x++;
     cout<<p<<endl

return 0;
}