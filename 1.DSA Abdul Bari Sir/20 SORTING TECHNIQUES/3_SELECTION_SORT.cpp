#include<iostream>
using namespace std;

void swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//--------------selection sort----------------//
/* in selection sort we will find the rightelemnt for a particular index
    approach is the we will run a for loop for n-1 times and inside that fro loop we will fin the minimu elemnt store the index an dswap it with A[i]*/
void selectionSort(int A[],int n)
{
    //we will run this loop for n-1 times stating from 0
    for(int i=0;i<(n-1);i++) 
    {
        //this is to strore the index of the minimum elemnt
        int k=i;
        //a loop strating from the just next index of i 
        //we will find the minimum elemnt from the elemnt in index i and the store the index of the minimum elemnt in the k so that after the loop completly scanned we will swap the A[k] and A[i] 
        for(int j=i+1;j<n;j++)
        {
            //if the A[j] is smaller than
            if(A[k]>A[j])
            {
                k=j;
            }
        }
        swaping(&A[k],&A[i]);
    }

}




int main()
{
    int A[]={8,6,3,2,5,4};
    int n= sizeof(A)/sizeof(A[0]);
    selectionSort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
    return 0;
}