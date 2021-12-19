#include<iostream>
using namespace std;

int & fun(int &a)   //int& means this will return a referance and &a as a referance
{
    return a; //as a is a refrance it wont return a value ,it will return the referance which is pointion to the actual variable a
}

int main()
{
    int x=10;
    cout<<"value of x "<<x<<endl;
    fun(x)=25;   //as the fuction is returning the referance then the fuction can act as variable and we can assign value 
    cout<<"value of x after return by referance "<<x<<endl;

    return 0;
}

//in short we can use function as a r valueand assign value t it