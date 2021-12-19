#include<iostream>
using namespace std;

void fun()
{
    static int a = 10; //declaring a static varable and it only declared once no matter houch time the fuction is called
    int b= 5;
    a++;
    b++;
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    fun(); //11   6               we can see that the a is increasing but b is same as on each time
    fun(); //12   6               as each time the fuction is called it declared the variable again
    fun(); //13   6               but staic variable sre declared once only,its luike global variable but in the scope of the fuction and bloc   
     return 0;                     
}