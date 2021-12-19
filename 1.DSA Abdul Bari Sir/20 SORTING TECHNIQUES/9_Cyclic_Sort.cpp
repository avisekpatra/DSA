#include<bits/stdc++.h>
using namespace std;

//if it is given the elemnts in the array is from 1 to n ,unsorted and no dupliacte and no missing elemntsbetween 1 to n


void swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void cyclicSort(int A[],int n)
{
    int i=0;
    while (i<n)
    { 
      if(A[i]!=i && A[i]<n)
      {
          swaping(&A[i],&A[A[i]]);
      }
      else 
      {
          i++;
      }
    }
    int flag=0;
    for(int j=0;j<n;j++)
    {
        if(A[j]!=j)
       {
           cout<<endl<<j<<" is missing\n";
           flag=1;
           break;
       }
    }
    if(flag==0)
    cout<<n<<" is missing"<<endl;
}


int main()
{
    int A[]={3,0,1,};
    cyclicSort(A,4);
    return 0;
}