#include<isotream>
using namespace std;

class test
{};
class tset2:public tset2
{};
 //if a class is inheriting from anather class and there object are been throw for some exception then 
 //the catch stament should be in reverse ordrt like 1st catch for child class then then above parent class




int main()
{
try
{
    throw 1;
    throw 6.8f;
    throw 67.9;
    throw 'c';
    throw string("i am batman");
    throw test();
    throw test2();
    // throw anytype if not mentioned above
    
}
//it is sugested to write all types of class for better organisation
catch(int i)
{
//for throw intValue;
}
catch(float f)
{
//for throw floatVlauef;
}
catch(double d)
{
//for throw double value;
}
catch(cahr c)
{
//for throw char;
}
catch(string s)
{
//for throw string("sting input");
}
catch(test2)
{
//for throw test2(); remeber child class catch must be written 1st
}
catch(test)
{
    //parent class catch will bw written after the chils class
}
catch(...) 
{
//for throwing anything i mean any type
//it is sugested to write this all catch(...) at the end of evrey one
}
return 0;
}