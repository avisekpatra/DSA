#include<iostream>
using namespace std;

void swap(int *p ,int *q)  //as these arguments are expecting adress so pointer are youes
{    
    
    cout<<"values of the local variabels(formal arguments) befor swaping "<<*p<<"\t"<<*q<<endl;
    int temp = *p;   //*p means data of the variable whose address is dstored in the pointer and we are doing operation on the data
    *p=*q;             
    *q=temp;
     cout<<"values after swaping"<<*p<<"\t"<<*q<<endl;
}

int main()
{
    int x=10,y=20; 
     cout<<"values befor swaping "<<x<"\t"<<*y<<endl;
   
    swap(&x,&y);  //theactual parameters are sending address of the variabel not the data 
     cout<<"values after swaping"<<x<<"\t"<<y<<endl;  //now this values will be swaped 
    
    
    
    return 0;

}