#include<iostream>
using namespace std;

class car
{
    public:
    virtual void start()=0;  //this measn pure virtual method
  
};

class audi:public car
{
    public:
    void start()
    {
        cout<<"audi is starting \n";
    }
   
};
class suziki: public car
{
    public:
   void start()
   {
       cout<<"suziki is stratin\n";
   }
};

int main()
{
    car *c= new suziki;
    c->start();      
    c= new audi;
    c->start();
}