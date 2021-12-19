#include<isotream>
using namespace std;

class parent
{
    public:
    void display()
    {
        cout<<"parenr";
    }

};

class child:public parent
{
 public:
 void display()
 {
     cout<<"child";
 }
};

int main()
{
    //object of child class
    child c;
    //on cllaing the function first priority is for its own classs the  if  will check for extendes class
    c.display();   // now if i didn have this same fuction the child class it would call the inherited display() fuction
return 0;           //but as we have written the  same display fuction with differnt message it will call its own fuction which is known as function overloasing

}