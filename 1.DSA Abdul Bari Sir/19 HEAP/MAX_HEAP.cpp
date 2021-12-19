#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void insert(int A[],int n)
{
    int i=n;
    int temp=A[n];
    while (i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

void deleteElement(int A[],int n)
{
   int i=1,j;
   swap(A[1],A[n]);
   n--;

while (n>1)
{


   if(A[2*i] > A[2*i+1])
   {
       if(A[2*i]>A[i])
       {
           swap(A[2*i],A[i]);
           i=2*1;
       }
       else 
       break;
   }
   else
   {
       if(A[2*i+1]>A[i])
       {
           swap(A[2*i+1],A[i]);
           i=2*i+1;
       }
       else
       break;
   }
}

}


int main()
{
    int H[]={0,12,56,23,46,89,34,26};
    int n= sizeof(H)/sizeof(int)-1;
    for(int i=2;i<=n;i++)
    {
        insert(H,i);
    }
    //printing after converting to the max heap
    for(int i=1;i<n;i++)
    {
        cout<<H[i]<<" ";
    }

    //deleteing
    for(int i=n;n>1;n--)
    {
        deleteElement(H,i);
    }

    cout<<"\nDelete\n";
    for(int i=1;i<n;i++)
    {
        cout<<H[i]<<" ";
    }
    
    return 0;
}