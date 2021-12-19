#include<iostream>
using namespace std;

class demo;  //we have to declare this class to use it as frien but we can define it after the test class

class test
{
    private: int a;
    protected: int b;
    public: int c;

    friend class demo;  //we have to make the demo class our friend so that it can acsees the private ,protected members using the object of the same class
};

class demo
{
    public:
    test t;  //we have too create the object of the class whose we want to accses members or how else we gonna accses
    public:
    void fun()
    {
     t.a=10; //as this class is friend in the class test it is allowed to accss eberything
     t.b=12;
     t.c=13;
     cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
    }
};

int main()
{
    demo d; //here we have created an object of demo 
    d.fun();//here we have called the fun()
    //remeber thet the objecct of the class can only accse public memebers only
 
    return 0; 
    
    
}
