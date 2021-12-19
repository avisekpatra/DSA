#include<iostream>
using namespace std;

int main()
{
    //inside the blocks
if(true)
{
    int a=10;
    cout<<a<<endl;
}

//inside a dummy block
{
    int a = 15;
    if(true)
    cout<<a<<endl;
    
}

//iside the condition bracket
if(int a=5)
    cout<<a<<endl;


return 0;


}