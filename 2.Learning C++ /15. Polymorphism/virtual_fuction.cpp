#include<iostream>
using namespace std;

class parent
{
public: 
virtual void fun()    //by ading virtual on calling the fun function it will call the overrided function that is it will not call this fuction but the function of chil class
{cout<<"parent"<<endl;}
};
class child: public parent
{
public: 
void fun()   //fuction overloading
{cout<<"child"<<endl;}
};
int main()
{    
    child d;
    d.fun();   //on calling this it will directlty call  the overrided function that is he fuction in chil claass that is the fuctio in the class of which the object is used
    parent *ptr= new child;  //when we craete a pointer of parent class pointing to object of child class 
    ptr->fun();  //as we have made the parent class fun virtual it will call the fun in child class ,to call the fun of parent class just remove the virtual keyword and leave it like default
    return 0;
}