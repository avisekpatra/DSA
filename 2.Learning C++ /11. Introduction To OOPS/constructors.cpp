#include<iostream>
using namespace std;

class rectangel
{
    private :

    float length,breadth;

    public:
    
    //mutatter fuctions
    void setLength(float l)
    {
        if(l>=0)
        length = l;
        else
        length = -l;
    }

    void setBreadth(float b)
    {   
        if(b>=0)
        breadth = b;
        else
        breadth = -b;
    }

    //accessor fuction 
    float getLength()
    {
        return length;
    }

    float getBreadth()
    {
        return breadth;
    }

    //constructors

    //non parametersied constructor
    rectangel()   //default constructor
    { 
        length=0;
        breadth=0;
    }

    //parametersied constructor
    rectangel(float l=0,float b=0)   //assigning  0 help us using is 3 ways ,without passsing parameters ,onle one parameter and 3 parameter
    {
       setLength(l);
       setBreadth(b);
    }
    //copy constructor
    rectangel(rectangel &rect)    //by referance
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    //fasilators funstions to perform operaton
    float area()
    {
        return length*breadth;
    }

    float perimeter()
    {
        return 2*(length * breadth);
    }

};

int main()
{
    rectangel r;
    cout<<"r "<<r.getLength()<<" and "<<r.getBreadth()<<endl;
    cout<<"r "<<r.area()<<" and "<<r.perimeter()<<endl;

    rectangel r1(15,7);
    cout<<"r1 "<<r1.getLength()<<" and "<<r1.getBreadth()<<endl;
    cout<<"r1 "<<r1.area()<<" and "<<r1.perimeter()<<endl;

    rectangel r2(19);
    cout<<"r2 "<<r2.getLength()<<" and "<<r2.getBreadth()<<endl;
    cout<<"r2 "<<r2.area()<<" and "<<r2.perimeter()<<endl;

    rectangel r3(r1);
    cout<<"r3 "<<r3.getLength()<<" and "<<r3.getBreadth()<<endl;
    cout<<"r3 "<<r3.area()<<" and "<<r3.perimeter()<<endl;

return 0;

}