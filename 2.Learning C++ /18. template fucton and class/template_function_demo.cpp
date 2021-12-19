#include<iostream>
using namespace std;

//for comparision between same type of data type
template<class t>

t maxi(t a, t b)
{
    return a>b?a:b;
}

//adding fuction but taking parameters of 2 type
template<class t,class r>
void add(t a , r b)
{
cout<<"addition is "<<a+b<<endl;
}

int main()
{
  cout<<maxi(10,9)<<endl;
  add(10,18.768);
  
}


