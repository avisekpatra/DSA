//that is the fuction will return a adress

#include<isotream>
using namespace std;

 int* fun(int size)   //here to return a adress we use int* as return type
 {    
     //we can only return adress of heap meomory as when the fuction is over the variabel in stack memory will be cleared

     int *p= new int [size];  //new keyword is used means heap memmory is alocated and also remember as we are returning adresss we have to dael with this pointer
     for(int i=0;i<size;i++)    //as this is a heap memory alocation we suppose to manually delete p and asign the pointer nullptr
     {
         p[i]=i+1;
     }

     return p; //here p is storing the adress as it is a pointer and *p store the value of the variabel of which its adresss is stored
 }


 int main()
 {
     int *a= fun(5);  // as the function is returning a adress we have to store it in an adress
     
 }