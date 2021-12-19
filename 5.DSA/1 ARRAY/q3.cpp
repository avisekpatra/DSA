#include<iostream>
using namespace std;

void swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void count_sorting(int A[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {   
                swaping(&A[i],&A[j]);
                j++;
        }
    }
    for(int i=j;i<n;i++)
    {
     if(A[i]==1)
     {
         swaping(&A[i],&A[j]);
         j++;
     }
    }
    
}

int main()
{
    int A[]={2,0,1,0,2};
    int n=sizeof(A)/sizeof(A[0]);
    
    count_sorting(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}