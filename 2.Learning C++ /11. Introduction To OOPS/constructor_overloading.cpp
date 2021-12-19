#include<iostream>
using namespace std;

class rectangel
{
    private: 
    int length ;
    int breadth;

    public:
    
    //mutator function
     void setLength(int l)
    {   
        if(l>=0)
        length = l;
        else
        length = -l;
    }
     void setBreadth(int b)
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
    //constructor

rectangel(int l=0, int b=0) 
{
    setLength(l);
    setBreadth(b);
}

//fuctions

int area()
{
    return length*breadth;
}

int perimeter()
{
    return 2*(length*breadth);
}

};


int main()
{
    rectangel r;
    cout<<r.area()<<endl;   //0

    rectangel r1(10,-5);
    cout<<r1.area()<<endl;    //50
    
    rectangel r2(6);
    cout<<r2.area()<<endl;   //0
   

}