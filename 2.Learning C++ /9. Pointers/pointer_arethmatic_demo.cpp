#include<iostream>
using namespace std;

int main()
{
int a[10] ={0,1,2,3,4,5,6,7,8,9};


int *p = a;      //this means the pointer is pointing to the 1st elemt of the array
cout<<*p<<endl;  //printint  the value stored in the 1st elemnt in the array

p++;             //now the pointer is pointing the next elemnt
cout<<*p<<endl;

p--;             //now pointer is pointing the previous elment 
cout<<*p<<endl;

p+=4;            //pointer will move by +4 steps and then point the new elment
cout<<*p<<endl;

p-=2;            //pointer will no go back -2 steps and poin the new elment at back
cout<<*p<<endl;


int *q = &a[8];  //creating anather pointer which is pointing the 8th elemnt in the array
cout<<*q<<endl;

//we can also find the distance between those 2 pointers

int d=q-p;
cout<<d<<"Element are there between them"<<endl;







    return 0;
}