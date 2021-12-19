#include<iostream>
using namespace std;

int main()
{
    int a =10,b=0;
    int c;
    try   //we have to write try
    {
        if(b==0)    //if this condition is satified then 
        throw 101;   //throw some value like any value or anything ,remeber to write the catch(required data type)
        c = a/b;
        cout<<c<<endl;
    }
    catch(int e)  //when it throw somethinng this will be print and the code termination will stop there
    {
        cout<<"error no "<<e<<" - canot divided by 0"<<endl;
    }

    cout<<"program terimnated";
    return 0;
}