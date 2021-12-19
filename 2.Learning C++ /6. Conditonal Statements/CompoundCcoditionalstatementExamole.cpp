#include<iostream>
using namespace std;

int main()
{
//for checking time question
cout<<"q1.time checking question \n";
int hour ;
cout<<"Enter the hour \n";
cin>>hour;
if(hour>=9 && hour<=18)
cout<<"Working \n";
else
cout<<"Free and call \n";
cout<<endl;
//for cheking age quetion
cout<<"q2.age checking question \n";
int age ;
cout<<"enter the age \n";
cin>>age;

if(age>=12 && age<18)
cout<<"abey abhi bacha hai tu \n";

else if(age>=18 && age<=45)
cout<<"your are not old yet\n";

else if(age>45 && age<=60)
cout<<"acha baap ke umar ke ho \n";

else if((age>=1 && age<12) || (age>60 && age<=100))
cout<<"not eligible \n" ;

else
cout<<"Abey tu bhosidike zinda hai\n";

return 0;
}

