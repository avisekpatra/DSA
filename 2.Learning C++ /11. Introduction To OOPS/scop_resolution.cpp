#include<iostream>
using namespace std;

class rectangel
{
  private:
  int len,bre;
  public:
  //constructor                                
  rectangel();                                    //so while using the scope resulation
  rectangel(int l,int b);                         //we only write the prototype of the fuction like this
                                                  // the write the function ousidew of the class
                                                  //why as if we write inside the class in the time ofdeclaration the code will be a part of the main fuction the memmory so to prevent it we declare the fuction outside of the class       
  //mutators
  void setLen(int l);                                       
  void setBre(int b);                                      

  //fasilators
  int area();
  int perimeter();
};

rectangel::rectangel()                     //this is how we use :: aka scope resulation means this fuction is for the class rectangel
{
    len=0;
    bre=0;
} 

rectangel::rectangel(int l,int b)
{
    setLen(l);
    setBre(b);
}

rectangel ::setLen(int l)
{
    len = l;
}

rectangel ::setbre(int b)
{
    bre=b;
}
rectangel:: area()
{
    return len*bre;
}
rectangel:: perimeter()
{
    return 2*(len+bre);
}

int main()
{
    rectangel r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}



