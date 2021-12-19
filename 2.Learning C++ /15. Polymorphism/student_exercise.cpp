#include<iostream>
#include<cmath>
using namespace std;

class shape //it s an abstraact generalised class
{
public:
virtual float area()=0; //pure virtual method/fuctions so that the derived class are forced to override this fuctions
virtual float perimeter()=0;
};

class circle:public shape
{
private:
float radius;
public:
//constructors
circle(float radius=0)
{
this->radius= radius;
}
//mutators
void setRadius(float r)
{
radius = r;
}
//accsesprs
float getRadius()
{
    return radius;
}
//facilators
float area()
{
    return 3.14*pow(radius,2);
}
float perimeter()
{
    return 2*3.14*radius;
}
//destrucrtors
~circle()
{cout<<"circle is destroyed\n";}
};

class rectangel:public shape
{
private:
float length,breadth;
public:
//constructor
rectangel(int length=0,int breadth=0)
{
    this->length=length;
    this->breadth=breadth;
}
rectangel(rectangel &r)
{
    length=r.length;
    breadth=r.breadth;
}
//mutators
void setLength(float l)
{
    length=l;
}
void setBreadth(float b)
{
    breadth=b;
}
//accseors
float getLength()
{
    return length;
}
float getBreath()
{
    return breadth;
}
//facilators
float area()
{
    return length*breadth;
}
float perimeter()
{
    return 2*(length+breadth);
}
//destructor
~rectangel()
{
    cout<<"rectangel destroyed\n";
}
};

int main()
{
    shape *s; //as shape is an abstract class we cannot create an object but we can create pointer to the object of derievd class
    s=new circle(7.9);
    cout<<"circl"<<endl;
    cout<<s->area()<<endl;
    cout<<s->perimeter()<<endl;
    
    s=new rectangel(18,39);
    cout<<"rectangel"<<endl;
    cout<<s->area()<<endl;  //as we can see polymorphism here same excat staement above but different outputs
    cout<<s->perimeter()<<endl;
    return 0;
}