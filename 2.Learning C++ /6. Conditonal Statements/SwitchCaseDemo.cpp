#include<iostream>
using namespace std;

int main()
{ 
    int day;
cout<<"Enter the day no \n";
cin>>day;

switch(day)
{
    case 1: cout<<"mon \n";
    break;

    case 2: cout<<" tue\n";
    break;

     case 3 :cout<<" wed\n";
    break;
    
    case 4:cout<<" thu\n";
    break;

     case 5:cout<<" fri\n";
    break;

     case 6:cout<<" sat\n";
    break;

     case 7:cout<<" sun\n";
    break;


    default:cout<<"marna hai kya bhosadike \n";
}

    return 0;
}