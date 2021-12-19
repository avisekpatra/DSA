//to take full string we haev to use getline(cin,string_name)
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name\n";
    getline(cin,name);
    cout<<"your full name is "<<name<<endl;
    return 0;
}