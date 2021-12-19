#include<iostream>
using namespace std;  //we use this so that it has all cout and cin etc, so we dont have to write std
 
 //if we have multiple but same fuction name ,or class name then  there can be a negative ambiguity
 //to prevent that kind of ambiguity we use namespace

 namespace first //we can write an name
 {
     void fun(){cout<<"first\n";}
 } // namespace 1

 namespace second
 {
     void fun()
     {
         cout<<"second\n";
     }
 }


 //for calling those function we can use 2 method
 //method 1 that is declaring using namespace first then if we call fun() which will call fisr fub() as we used using namespace first 

 using namespace first
 int main()
 {
     fun(); // this belongs to first namespace 

//or we can call by 
second::fun(); //we have to use seci\ond scope fub();

 } 