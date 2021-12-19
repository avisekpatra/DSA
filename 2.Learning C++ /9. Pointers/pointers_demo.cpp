#include<iostream>
using namespace std;

int main()
{
 int x=10;

 //declaration and initialisation of pointer
int *p = &x;  //&x means adress of x

cout<<x<<endl; //show the value at x 

cout<<&x<<endl; //adress of x

cout<<p<<endl;  //value stored at p that is the adress of x

cout<<&p<<endl;   //adress of pointer p

cout<<*p<<endl;  //dereferancing means shows the value of the variable which adress it is storing that is the x in this case

    return 0;
}