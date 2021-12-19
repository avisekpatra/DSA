#include<isotream>
using namespace std;

class test
{
    private:
    public:
    tset()  //when the object is created then constructor is called
    {
        cout<<"object is created\n";
    }
    ~test()  //when we delete the dynamic object the destruvctor is called 
    {
        cout<<"object is destroyded\n";
    }
};

int main()
{
    test *t = new int[10]; //dynamic memmory alocatiom


    delete t;  //every time a dynamic memmory alocation is tere thenwe have to delete the memmory manually
               //delete t will call the destructor of the class which will destroy the object created
    return 0;
}