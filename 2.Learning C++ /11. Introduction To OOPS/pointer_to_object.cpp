#include<iostream>
using namespace std;
class rectangel
{
  public:
  int length;
  int breadth;

  int area()
  {
      return length*breadth;
  }

  int perimeter()
  {
      return 2*(length+breadth);
  }

};

int main()
{
//creating a stack memory object
rectangel r1;
r1.length = 5;
r1.breadth= 6;
cout<<"area is "<<r1.area()<<endl;
cout<<"perimeter is "<<r1.perimeter()<<endl;

//creating a pointer object
rectangel *ptr = &r1;
ptr->length = 10;
ptr->breadth = 15;
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;

//creating a heap memoruy pointer object
rectangel *q = new rectangel();
q->length =12;
q->breadth = 6;
cout<<q->area()<<endl;
cout<<q->perimeter()<<endl;


    return 0;
}