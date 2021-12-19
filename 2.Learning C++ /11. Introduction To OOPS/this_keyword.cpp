#include<iostream>
using namespace std;

class rectangel
{
private:
int length;
int breadth;
public:
rectangel(int length,int breadth);
int area();
~rectangel();
};

int main()
{   rectangel r1(10,5);
    rectangel *r=&r1;
    cout<<"area is "<<r->area()<<endl;
    return 0;
}

rectangel::rectangel(int length,int breadth)
{
    this->length=length;
    this->breadth=breadth;
}

int rectangel::area()
{
    return length*breadth;
}

rectangel:: ~rectangel()
{  
    static int i=1;
    cout<<"retangel "<<i++<<" destroyed"<<endl;
}