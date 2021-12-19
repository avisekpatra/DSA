#include<iostream>
using namespace std;

void fun()
{
//constant ariabels that is we cannot change the valueof this variabels
int const a =10; 
const int b=12;   
//constant pointers 
const int* ptr = &a; //this means this a constant pointer which cannot modify the value of a and a need to be a constant for this to be work

int const *int ptr =&a; //this means that the value of the data whose adress is storing cannot be changed and read it from right to left
 ptr = &b;   //can store anather                      //but we can assign other variabel adress

int * const ptr = &a; //this means we cannot noew change the adress it was storeing befor

const int * const ptr = &a;//nothing can be changed ,na value or the adress it is storing


}