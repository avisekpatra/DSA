#include<iostream>
using namespace std;

//for swaping 2 elemnets
void Swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

//function  to put a particular elemnt at its right position and return the position
//so that we can perform the same for elemnts in the left side and right side
int partition(int A[],int left,int right)
{
    int i=left; //strating from the beging this index will serach for the elemnts which are greater than the pivot as they dont belong on the left side
    int j=right; //search for the elemnt smaller than the pivot 
    int pivot=A[left]; //taking a elemnt and we will arange the elemnts acordingly and place that elemnt on ots right position
    //we will continue till it comes to that i<j that means we have scanned the list completely
    while (i<j)
    {
        //this is for checking for greater lement than pivoits when found one stop and hold that index
        while (A[i]<=pivot)
        {
            i++;
        }
        //for searching of the lower elemnt than pivoit
        while (A[j]>pivot)
        {
             j--;
        }
        //check if you have completely scaned the list then dont swap
        //else swap to blance 
        if(i<j)
        {
            Swaping(&A[i],&A[j]);
        }
    }
    //after that loop j is pointing to the index where the pivot elememt should be
    //A[left] is the position of the partition
    Swaping(&A[left],&A[j]);
    //return the index
    return j;  
}


//quicksort function retucursively
void quicksort(int A[],int left,int right)
{
    //checking if there are atlesat 2 elments are present or not
    if(right>left)
    {
        //storing the index of the pivot elemnt and palcing a pivot elemt in the index
        int index=partition(A,left,right);
        //then recursively sort it 
        //first the left side     
        quicksort(A,left,index-1);
        //then the right side
        quicksort(A,index+1,right);
    }
}


int main()
{
    int A[]={50,70,60,90,40,80,10,20,30};
    quicksort(A,0,8);
    cout<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}