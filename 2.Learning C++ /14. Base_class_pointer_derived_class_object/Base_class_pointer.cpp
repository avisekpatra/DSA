#include<iostream>
using namespace std;

class base
{
    public:
    void fun1()
    {
        cout<<"1"<<endl;
    }
     void fun2()
    {
        cout<<"2"<<endl;
    }
};
class derieved:public base
{
    void fun3()
    {
        cout<<"3"<<endl;
    }
    void fun4()
    {
        cout<<"4"<<endl;
    }
};

int main()
{
    base *b;
    b=new derieved();
    //or
    derieved d;  //create objrct of dewrived class
    base *ptr = &d;  //the assigning the poinnter of base class to adress of object of derivied class
    b->fun1();
    b->fun2();
    //b->fun3(); and fun4 can not be accesabel as the base clas lacks the properties of the derieved class so it can not acsee it,i mean if you dont have legs how will you play football 
}

//rember we can create a obejct of derieved class and point to base class object as we can not say the derived class object to bsae class then the base class object lack the property of derived class so hoe the derived class operate 
