#include<iostream>
using namespace std;

//enum is use to create our own data type of given det of data
//declaring an enum of days  
//the variabel in enum are allconstant
//we can assign value to them at any point ant the rest will foollow  order if not changed
//if no value is assigned then it will start from 0
//we cannot assign any value other then in the set

enum day {mon=456,tue,wed,thu=5,fri,sat,sun};

int main()
{

day d;
d= thu;

cout<<d<<endl;

cout<<mon<<endl;
cout<<tue<<endl;
cout<<wed<<endl;
cout<<thu<<endl;
cout<<fri<<endl;
cout<<sat<<endl;
cout<<sun<<endl;


    return 0;
}