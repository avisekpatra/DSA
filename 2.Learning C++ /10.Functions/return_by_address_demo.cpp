#include<iostream>
using namespace std;

int* fun(int size)
{
    int *p = new int[size];  //we have to use heap memory so that after the fuction completion we will still have a valid existing adress
for(int i=0;i<size;i++)
{
    p[i]= i+1;
}

cout<<p<<endl; //value of p
return p;

}

int main()
{
    int *x= fun(5); //calling the fuction and storing them in apointer
    cout<<x<<endl;  //showimng the adress stored in the pointer

    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<endl; //as in the heap memory there are 5 value are stored so it will sow whic values at with coreespointing index adress
    }
    return 0;
}
    
