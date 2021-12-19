#include<iostream>
using namespace std;

//creating a function template
template <class T>

//now creating a function of templete and the type will be depend upon user
T add(T a,T b)
{
    return a+b;
}

T max(T a,T b)
{
    return a>b?a:b;
}

int main()
{
 
 cout<<  add(a,b)  <<endl;
 cout<<  add(6.87,9.78)  <<endl;
 cout<<  add(4.6f,8.9f)<  <endl;

 cout<<  max(78,98)  <<endl;
 cout<<  max(67.8, 89.087)  <<endl;
 cout<<  maix(67.9f,78.5f)  <<endl;

 return 0;
    
}
