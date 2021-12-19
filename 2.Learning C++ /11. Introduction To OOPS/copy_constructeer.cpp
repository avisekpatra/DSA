#include<iostream>
using namespace std;

class rectangel
{
  private:
  int len,bre;

  public:
  //mutator
  void setLen(int l)
  {
      if(l>=0)
      len=l;
      else
      len=-l;
  }
  void setBre(int b)
  {
      if(b>=0)
      bre = b;
      else
      bre = -b;
  }

  //accesor
  int getLen()
  {
      return len;
  }
  int getBre()
  {
          return bre;
      }
  
   //constructors
   rectangel(int l=0,int b=0)
   {
       setLen(l);
       setBre(b);
   }

   //copy constructor
   rectangel(rectangel &rec)
   {
     len = rec.len;
     bre = rec.bre;
   }


  //fasilators
  int area()
  {
      return len * bre;
  }
  int perimeter()
  {
      return 2 * (len + bre);
        
   }

};

int main()
{
    rectangel r(10,8);
    cout<<" r "<<r.area()<<endl;  //80

    rectangel r1(r);
    cout<<" r1 "<<r1.area()<<endl;  //80
    return 0;
}