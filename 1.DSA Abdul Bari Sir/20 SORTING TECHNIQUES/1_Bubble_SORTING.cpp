#include<iostream>
using namespace std;

void swapelemnt(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int A[],int n)
{
    int i;
    int ne=n;
    while (n>0)
    {
        i=0;
        while (i<n-1)
        {
            if(A[i]>A[i+1])
            swapelemnt(A[i],A[i+1]);
        i++;       
        }
        n--;       
    } 
    for(i=0;i<ne;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[]={8,5,7,3,2};
    int n= sizeof(A)/sizeof(A[0]);
    bubbleSort(A,n);
    return 0;
}