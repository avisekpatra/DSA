#include<isotream>
using namespace std;
class basiccar
{
    public:
    void start()
    {
        cout<<"start";
    }
};
class advancecar: public basiccar{
    public:
    void music()
    {
        cout<<"play music ";
    }
};

int main()
{
    advancecar a;
    basiccar *b= &a;
    b->start(); //this can only acess to the start fution,as te basic car does not have the funtion of advance car
}


//same we can not create a pointer of dervied class and pointing to basic car object which is wrong as basic car does not have the feature for advance car
