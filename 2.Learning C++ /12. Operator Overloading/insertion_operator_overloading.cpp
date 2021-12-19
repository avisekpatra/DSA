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

friend ostream & operator<<(ostream &out , complex &c); //we have to use friend as it have more then 2 parameters s
                                                         //it returns ostream & i.e cout 
};

ostream & operator<<(ostream &out , complex &c)  //this fuction take 2 parameter cout and the object c
{
    cout<<c.real<<"+i"<<c.img<<endl;  //the message it will show after calling it
    return out;      //on returning it the whole function that is cout<<c will act as cout itself then we caue it as cout and write extra thing
}

int main()
{
    complex c(10,6);
    cout<<c;
    return 0;
}

