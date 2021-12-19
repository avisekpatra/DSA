#include<iostream>
using namespace std;

//takes an array and the size of the array
void insertionSort(int A[],int n)
{
    //first for loop for all the pass that is for n-1 times but we will start from 1 as if only one elemnt is there then it is sorted and also we ned one element for comparision
    for(int i=1;i<n;i++)
    {
        //stroring the new elemnt to be inserted in a variabel 
        int key=A[i];
        int j=i-1; //now this is for the other loop which will strat from the index just previous of the index of inserting elemnt
        //we will use a while loop with condition
        //checking if the key is smaller with the previous index elemnt then we will just shift
        //and also till j is 0 
        while (j>=0 && key<A[j])
        {
            A[j+1]=A[j];
            j--;
        }
        //after this loop we will get the location which is j-1
        A[j+1]=key;
    }
}

int main()
{
    int A[]={5,4,3,2,1};
    int n= sizeof(A)/sizeof(A[0]);
   
    insertionSort(A,n);
    
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
    return 0;
}