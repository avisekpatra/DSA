#include<iostream>
using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}

int min(int a,int b)
{
    return a<b?a:b;
}

int main()
{

//declaring a pointer to the fuction
int (*p)(int, int)=max; //syntax is (*p)(type) = fuction name
 
cout<<"the max value is "<<(*p)(10,4);    //caling syntax (*p)(parameters)
cout<<endl;



p=min;   //we can also assign min to the fuction pointer as thy have the same signarture
cout<<"the min value is  "<<(*p)(7,5);
cout<<endl;

    return 0;
}