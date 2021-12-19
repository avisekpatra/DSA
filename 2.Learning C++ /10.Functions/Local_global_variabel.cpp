#include<iostream>
using namespace std;

int x = 10; //this is global declaration
void fun()
{
    cout<<x<<endl; //p2 10
    x=15; // this will icrease the value of the global variable on function calling
    int x = 20;  //even the name is same but this ia a local variabel which is declared in the scope of thr fun() fuction
    
    {
        int x=5;   //even this a local variable which is different and scope valid inside that block 
        cout<<x<<endl;  //p3 5
    }

    cout<<x<<endl;  //p4 20 as it is in the function then the local variabel inside the fuction is thr scope
}


int main()
{
    cout<<x<<endl; //p1 10 as it will acsess the global variabel

    fun(); //caling the fuction 
    cout<<x<<endl; //p5 15   when the  fuction is called it will give the modified value of x as the fuction did modifided it

//to acsess the gloabal variael even in presense of the local variabel we can use ::x

cout<<::x<<endl; //p4 15   ::x means it is accsessing the glaobal varaiable

return 0;

}

// p1,p2,p3,p4,p5,p6 means print 1st ,2nd ..... print 6th the sequense at which the output wil be prited