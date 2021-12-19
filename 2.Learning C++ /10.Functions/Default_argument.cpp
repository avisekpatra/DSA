#include<iostream>
using namespace std;

template<class T>   //creating a template
T add(T a,T b=0,T c=0)
{
return a+b+c;
}

int main()
{
    cout<< add(1) <<endl;  //one one argument
    cout<< add(1,2) <<endl;  //2 argument
    cout<< add(1,2,3) <<endl; //3 argument

    cout<< add(78.9) <<endl;
    cout<< add(1.4f,2.78f) <<endl;
    cout<< add(1.4,2.5,3.15) <<endl;
return 0;
}