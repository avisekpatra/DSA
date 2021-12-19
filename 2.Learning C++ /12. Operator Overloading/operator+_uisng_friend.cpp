#include<iostream>
using namespace std;

class complex
{
private:
int real;
int img;

public:

complex(int real=0,int img=0)
{
    this->real=real;
    this->img=img;
}
void display()
{
    cout<<real<<"+i"<<img<<endl;
}
friend complex operator+(complex c1,complex c2);  //just write friend in the beging of the operator+ fuction

};

complex operator+(complex c1,complex c2)  //write the operator fuction outside but just after the class ,no need to use:: 
{
    complex temp;
    temp.real= c1.real+c2.real;
    temp.img = c2.img+c2.img;
    return temp;
}

int main()
{ 
complex c1(20,7),c2(6,8),c3;
c3=c1+c2;   //here c1+c2 is actually equal to operator+(c1,c2) but as we used operator+ we canwrite thet in that simple way
c3.display();

    return 0;
}
