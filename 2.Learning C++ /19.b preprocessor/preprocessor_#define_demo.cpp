#include<iostream>
using namespace std;

#define pi 3.14   //we can define pi  a value
#ifdef
#define pi 3  //noow this will check if there is a #define pi is assigned or not if not then only assign
#endif
#define c cout  //i can also define cout,cin, object also
#define multiply(x,y) (x*y)  //now this will replace the fuction result with x*y
#define msg(x) #x   //this will print the mesaage in a doubel "" that is if we write msg(hello) it will print "hello"

int main()
{
    c<<multiply(10,6);
    c<<msg(iambatman);
}
