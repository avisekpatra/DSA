#include<iostream>
using namespace std;

class parent
{
    public:
 parent()
    {
        cout<<"parent obj created\n";
    }
virtual ~parent()
    {
        cout<<"parent obj destroyed\n";
    }
};
class child:public parent
{
    public:
    child()
    {
        cout<<"child obj created\n";
    }
    ~child()
    {
        cout<<"child obj destroyed\n";
    }
};


int main()
{
child d;
return 0;
}