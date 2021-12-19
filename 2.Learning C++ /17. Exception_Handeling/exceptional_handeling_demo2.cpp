#include<iostream>
using namespace std;
 int main()
 {
     int l,b,area,perimeter;
     cin>>l>>b;
  
     cout<<"area and perimeter is"<<endl; 
     try
     {
       if(l==0 || b==0)
       throw 0;
       else if(l<0 || b<0)
       throw -1;

       area=l*b;
       perimeter=2*(l+b); 
     }
     catch(int e)
     {
         if(e==0)
         cout<<"error "<<e<<"- dimentions cannot be zero"<<endl;
         else if(e==-1)
         cout<<"error "<<-e<<"- dimentions cannot be negetive "<<endl;
     }

     cout<<"bye\n";

     return 0;

 }
