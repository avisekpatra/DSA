#include<iostream>
using namespace std;

float division(int x,int y)
{
    if(y==0)
    throw string("yo yo");   //if this condition is satified then it will throw this exception to the catch 
    else
    return (float)x/y; //if it didnt throw any catch then it will return this
}

int main()
{
    int a,b;
    cin>>a>>b;
try   //if it throw anything then it will go to the  catch block
{
cout<<division(a,b)<<endl;
}
catch(string e)
{
    cout<<"division with zero cannot be possible\n";
}

//after enqoutering the catch block the program will still run except the part inside the try block 


cout<<"bye\n";

}