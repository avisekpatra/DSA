#include<iostream>
using namespace std;

class test
{
    private:
    int a;
    static int count;
    public:
    //construvtor
    test(int a)
    {    
        this->a=a; //it is used for assing the values
        
        
    }
    ~test() //destructor will destroy the object created adn also we can give some message or some work for 
    {
        cout<<"test object-"<<++count<<" destroyed"<<endl;
    }
};

int test::count=0; //me must declare a staic variabel out side the class


int main()
{
    test t(10);
    test t1(20);
    //destructor will be called at the end of the main fuctiom

    return 0;
}