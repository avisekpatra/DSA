#include<iostream>
using namespace std;

class rectangel
{
private :
int len,bre;

public:
//constructors
rectangel();
rectangel(int l,int b);
rectangel(rectangel &rect);

//mutator functions
void setLen(int l);
void setBre(int b);

//accsesors functions
int getLen(){ return len ;};   //as it is just returning value so we can write it in the class
int getbre(){ return bre ;};

//facilatators functions
int area();
int perimeter();

//enquiry functions
bool isSquare();

//destructors
~rectangel();

};




int main()
{
rectangel r(5,5);
if(r.isSquare())
cout<<"it is a square and area is "<<r.area()<<" and perimeter is "<<r.perimeter()<<endl;
else
cout<<"it is a rectangel and area is "<<r.area()<<" and perimeter is "<<r.perimeter()<<endl;

rectangel r2(r);
cout<<"r2 area is "<<r2.area()<<endl;

    return 0;
}




//writing the whole fuction outside the class so that on the time of calling the fuction ,the fuction should not get included in the main fuction in the code section of the memory

rectangel::rectangel()
{
    len =0;
    bre =0;
}
 rectangel::rectangel(int l,int b)
 {
     setLen(l);
     setBre(b);
 }

 rectangel::rectangel(rectangel &rect)
 {
     len = rect.len;
     bre = rect.bre;
 }

 void rectangel::setLen(int l)
 {
     if(l>=0)
     len=l;
     else
     len=-l;
 }
 void rectangel::setBre(int b)
 {
     if(b>=0)
     bre = b;
     else
     bre=-b;
 }

int rectangel::area()
{
    return len*bre;
}

int rectangel::perimeter()
{
    return 2*(len+bre);
}

bool rectangel::isSquare()
{
    if(len==bre)
    return true;
    else
    return false;
}

rectangel::~rectangel()
{   static int count=1;
    cout<<"rectangel "<<count++<<" is destroyed\n";
    
}

 
