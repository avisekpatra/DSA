#include<iostream>
using namespace std;

class my:public exception  //we can throw object of any class and we are advised inherite the class publicly from a built in class exception
{

};

float division(int x,int y) throw(my) //we can also mention that we are throwing and we have to mention it here it object of class m
  //if we didnt fill the throw parameter that is throw()  then this fuction will not throw anything

{
    if(y==0)
    throw string("yo yo gallti kar di madrchod"); //this  is how we throw in string
   //we can also throw these types ,throw are for linking that there is an erroe and the user can chose based on what is his requirement
    throw 10; //throwing int 
    throw 6.7: // throwing doubel
    throw 8.9f; //throwing float
    throw my(); //throwing object of my clsss 
    throw 'c'; //throwing a char value
}

int main()
{ int a,b;
cin>>a>>b;
try
{
cout<<division(a,b)<<endl;
}

    return 0;
}
catch(my/*mention the type here and here is a class*/)
{
    //print the maeesage you  want to show
}
//remeber everything after catch will exicute

}