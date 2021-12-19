#include<iostream>
using namespace std;
int A[13]={0,30,15,5,10,12,6,40}; //array declared gloabally so that it can be accesed by the function
int n;  //it have the index of the nexly addde elemnt that is the index of the last elemnt of the heap 
void insert(int A[],int n)
{
//first store the element in a temp variable
int temp=A[n];
int i=n; //for iteration
while(i>1 && temp>A[i/2])
{
    A[i]=A[i/2];
    A[i/2]=temp;
    i=i/2;
}    
}

void print()
{
    for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{ 
   
    n=7; //at the index 7 we have added 40 the new node
    insert(A,n);

    return 0;
}