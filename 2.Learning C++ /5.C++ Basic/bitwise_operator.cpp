#include<iostream>
using namespace std;
 int main()
 {
    
 // & (and) operator means one (false)0 then all (false)0
int a =11,b=7,c;
c=a&b;
cout<<c<<endl; //3 

// | (or) operator means one (true)1 then all (true)1
int d=11,e=7,f;
f=d&e;
cout<<f<<endl;  //15

// ^ (xor) that if same then 0 and different then 1
int g=11,h=7,i;
i=g^h;
cout<<i<<endl; //12

// << left shift mean the x<<i is x=x*2^i
char j=5,k;
k=j<<1;
cout<<(int)k<<endl; //10   

// >> right shift means x>>i then x= x/2^i
char l=20,m;
m=l<<1;
cout<<(int)m<<endl; //10

// ~ (not) i.e 0 will be 1 and 1 will be 0
char x=5,y;
y=~x;
cout<<(int)y<<endl;  //10

     return 0;
 }