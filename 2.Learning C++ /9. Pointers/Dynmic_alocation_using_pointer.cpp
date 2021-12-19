#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size \n";
    cin>>size;

//creating a array of pointer using the current size input
int *p = new int[size];

for(int i=0;i<size;i++)
{
    cin>>p[i];    //we can assign the value just like ARRAY
}



for(int i=0;i<size;i++)   
{
    cout<<p[i]<<endl;      //printing the value
}


//now to modify the size we need to delete the p now
delete []p;

cout<<"Enter a new size\n";
cin>>size;

p =int [size];


for(int i=0;i<size;i++)   //we can now assign values with the new size
{
    cin>>p[i]; 
}


for(int i=0;i<size;i++)   
{
    cout<<p[i]<<endl; 
}

//remember to delte at the end 
delete []p;    //if we wont delete the pointer then it will take memmory
p=nullptr;   //and then assign to nullptr


return 0;



}