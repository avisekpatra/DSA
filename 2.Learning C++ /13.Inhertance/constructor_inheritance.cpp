#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
     cout<<"base class constructor \n";
    }
    base(int x)
    {
    cout<<"base class constructor "<<x<<endl;
    }
};
class derieved : public base    //this menas class derieved from base publicly
{
public:
derieved()
{
 cout<<"derieved class constructor"<<endl;
}
derieved(int a,int b):base(a) //here we called the base(int x) constructor ,this means when we create an object of drieved class it will call the constructor of derieved class and thet constructor call the base class constructor of our choice
{
    cout<<"derievd class constructor "<<a<<" "<<b<<endl;
}
};

int main()
{
    derieved d(10,5);
    return 0;
}