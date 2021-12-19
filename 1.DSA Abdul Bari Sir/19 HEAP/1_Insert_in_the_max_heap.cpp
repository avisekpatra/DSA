#include<iostream>
using  namespace std;



int main()
{
    int A[]={0,30,25,20,15,5,10,9};  //it is an array which have elemnts of a heap that s the elements in the array stored in level by level order
    int n=8; //index of the next elemnt to be inserted
    int i=n;  //iterator to traverse 
    int key;  //elemnt to be inserted
    cout<<"Enter the elment to be inserted dont give negative value \n";
    cin>>key;  //entering the key
    A[i]=key;   //assiginging the key to the vacant space that is the next element of the heap 
    n=i+1;     //now incresed the index by 1 for pointing an extra space where we will add our next elemnt

    int temp=A[i];  //assign a the newly insertede elemnt to a temp we can assig key to temp also
    //basically we will run a while loop to rearange the elemnt in the proper heap format
    while (i>1 && temp>A[i/2])   //we will check if the temp is bigger than the A[i/2] i/2 cause it ie the the parent clid                              //a
    {                            //we will cjeck if the parent node is bigger than the parent node or not if the parent node is smaller then swap the value from A[i] to A[i/2]
       A[i]=A[i/2];
       A[i/2]=temp;
       i=i/2;                 //then /2 the index go to for checking the next prarent and repeat
    }

   //printing the value after the insertion
    for(int j=1;j<n;j++)
    {
        cout<<A[j]<<" ";
    }
    
    return 0;
}