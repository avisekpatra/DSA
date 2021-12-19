#include<iostream>
using namespace std;
 class test
 {
     private:
     int a=10;
     int b=12;
     public:
     static int count;
     //constructor when object is created this will exicute everytime
     test()
     {  
         a++;    //as this are non static so everytime the object is created then it will always start with same value as they will consiume different mammoey so object cannot share it
         b++;
         count++; //as this is static each time object is created this will increase as all object share this variabel and ther consume only one memmory
         
     }

 };

 //we have to declare the static member ouside the class gloabally but in the scope of test class
 int test::count=0;

 int main()
 {
     //we can acsee using object of test class
     test t1;
     cout<<t1.count<<endl;  //will show 1 as only onr object is created 
     test t2;
     cout<<t1.count<<endl;    //now this and the next statemnet will show the same no as they share this satic member
     cout<<t2.count<<endl;     //same as abobe
     //or we can acsses it using class itself also
     cout<<test::count<<endl;  //this will show the outpiut of the last valueof count
 }