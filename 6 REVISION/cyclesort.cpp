#include<iostream>
using namespace std;

void swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void cyclicsort(int A[],int n)
{
  int i=0;
  while (i<n)
  {
      if(A[i]!=i+1 && A[i]<n && A[i]>0)
      {
         swaping(&A[i],&A[A[i]-1]);
      }
      else 
      {i++;}
  }

  cout<<endl;
  for(int j=0;j<n;j++)
  {
      if(A[j]!=j+1)
      {
          cout<<j+1<<" is missing\n";
      }
  }
   
}

int main()
{
    int A[]={1,-1,3,4};
     cyclicsort(A,3);
     return 0;
}