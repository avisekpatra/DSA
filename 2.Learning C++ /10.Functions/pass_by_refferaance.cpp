#include<isotream>
using namespace std;

void swap(int &a,int &b)   //parameters are refferance ,referance is like a nickname for a value that different name but pointing the same value at same addres
{
int temp= a;
a=b;
b=temp;
}

int main()
{
    int x=10,y=20;
    swap(x,y);  //calling the fuction just like pass by values

    cout<<x"\t"<<y<<endl; //will print the swaped values

    return 0;
}

//remember while using pass by refferance ,when the function is called ,the code will be a part of the main fuctionn n the memmory AT CODE section
//so avoid multiple time calling the function
//avoid use complexity solution in the function
//avoid using the for loops and other complexity 
