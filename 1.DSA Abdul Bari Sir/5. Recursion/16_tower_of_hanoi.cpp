//it is sugested that for tower of hanoi check the video
#include<iostream>
using namespace std;
//here n is the no of disk 
//A is the "from" that is source 
//B is the middleman 
//C is teh "to" that is destination
void TOH(int n,int A,int B,int C) 
{
    if(n>0)
    {
        TOH(n-1,A,C,B); //we will use recursive function to move n-1 disc from A to B
        //we are just passsing the values in thr respective place of parameters as the parameter position define what tower it defines
        cout<<"move disk from tower "<<A<<" to tower "<<C<<endl; //print 
        TOH(n-1,B,A,C); //this wiil move the 2 disc from B to  C using recursion so its not a onr step process

    }
}

int main()
{
    TOH(3,1,2,3);
    return 0;
}