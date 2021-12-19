#include<iostream>
using namespace std;

class Test
{
private:
int a;
protected:
int b;
public:
int c;
friend void function(); //we declare the gloabal function as friend which can acsses all the members
                        // using the object this class only it can acsee
};
void function()
{
Test t;  //creating an object of test
t.a=10;   //as we made this function a friend so we can acsse to private and protected part of the class
t.b=19;
t.c=23;
}



