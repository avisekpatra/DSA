#include<iostream>
using namespace std;

class outer   
{
public:
static int a;
void fun()
{
    i.display();
}
//inner nested class
class inner
{
void display()
{
    cout<<a<<endl;  //inner class can only acsse only static members ,can not access non static member directly
}
};

inner i;  //must declare the class before declaring the inner class object 
};

int outer::a=10;

int main()
{
//we can also create object of the inner class outside the outer class using :: resolution
outer::inner i;
return 0;
}