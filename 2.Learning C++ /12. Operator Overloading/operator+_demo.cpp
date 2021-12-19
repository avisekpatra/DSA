#include<iostream>
using namespace std;

class complex
{
private:
int real;
int img;
public:

complex(int real=0,int img=0)
{
    this->real=real;
    this->img=img;
}
complex operator+(complex c)   //instead of function name we write operator+  
{
    complex temp; //creating a object to store the adiing value and retunr the same object
    temp.real= real + c.real;
    temp.img= img + c.img;
    return temp;
}
void display()
{
    cout<<"new complex no is "<<real<<"+"<<img<<"i \n";
}
~complex()
{}
};

int main()
{
    complex c1(4,7),c2(6,9);
    complex c = c1+c2;  //now we can just simply use + symbol for calling the adtion fucrtion indtead of calling by the whole name
    c.display();
    return 0;
}

