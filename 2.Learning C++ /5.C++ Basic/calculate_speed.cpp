#include<iostream>
using namespace std;
int main()
{
  float speed,u,v,a;
cout<<"enter u and v and a"<<endl;
cin>>u>>v>>a;
speed = (u*u + v*v)/(2*a);
cout<<"the speed is "<<speed<<endl;
    return 0;
}