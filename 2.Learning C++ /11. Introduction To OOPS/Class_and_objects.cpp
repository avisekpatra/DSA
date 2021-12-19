#include<iostream>
using namespace std;

class rectangel
{
  public :       //we haev to declare it public so that we can acsee it ouside the class
    
    
    int l,b;     //properties of class

   
    int area()    //functions are behaviours of the class and they dont consume memory 
    {
        return l*b;
    }

    int perimeter()
    {
        return 2*(l+b);
    }

};    // we have to end the class ; by semi colon

int main()
{
    rectangel r1;   //creating an object of class rectangel ,remember that a class is a user defined data type
                 //we can say that rectangel is a data type and r1 ,r2 are variabels and as variabel they consume memory 
                 //as variabel they consume memory same as the sum of memory by all data types 
   
    r1.l=10;     //asigning value using object ,as the iside of the class is public this main fuction can acesee it
    r1.b=20;

    cout<<"area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;
}