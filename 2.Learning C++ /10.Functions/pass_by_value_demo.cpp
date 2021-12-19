#include<iostream>
using namespace std;

void swap(int a, int b)    //here a and b are formal parameters
{
    cout<<"values of the local variabels(formal arguments) befor swaping "<<a<<"\t"<<b<<endl;
    int temp = a;
    a=b;
    b= temp;
    cout<<"values after swaping"<<a<<"\t"<<b<<endl;

}


int main()
{
    int x=10,y=20;
     
     swap(x,y);  //here x and y are the actual parameters  

cout<<x<<"\t"<<y<<endl; //here the values wll not changes as in only the values of actual parameters are copied to formal parameters


}