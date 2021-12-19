#include<iostream>
using namespace std;

class parent
{
    public:
    virtual void fun()=0;  //so we made this fuction as pure virtual function so now this class is abstract class
};                         //we cannot create object of abstract class but can create pointer pointing to object of derived class

class child:public parent
{
    public:
    void fun()  //as we have written a purevirtual fuction of this functio we a fored to override this function
                //or else this class will become abstract class
    {
        cout<<"i am batmann\n";
    }
};
int main()
{
    parent *p = new child;
    p->fun();// this will call the function in the derived class as we made the parent class function virtual so we have to override it

}