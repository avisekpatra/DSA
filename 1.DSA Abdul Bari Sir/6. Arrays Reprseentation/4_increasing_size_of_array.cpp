#include<bits/stdc++.h>
using namespace std;

int main()
{
    //create an array in heap memmory and point them using a pointer p
    int *p= new int[5];
    //filling values in the array
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    //steps to increase the size of the  array
    
    //step-1 now create an array bigger size than p
    int *b = new int[10];

    //step-2 now copy the values in the array p to b using for loop
    for(int i=0;i<5;i++)
    {
        b[i]=p[i];
    }

    //step-3 now delete the array pointed by p as we dont need it and it is a heap memmory which may lead to memory leak
    delete []p;

    //step-4 now point p to q
    p=q;

    //step-5 now point q to null remeber dont delete the q ,only point to null
    q=null;

    //now we have an array of p of bigger size then before
    //now we can add 10 elemnts
    //after everything is over delete the heap memmory craeted
    delete []p;

    return 0;

}

//as elements in array stored in contigeous manner so if we increase the size latter  it cannot be contigeous anymore
//increse size only can be done using pointer and in heap memmory