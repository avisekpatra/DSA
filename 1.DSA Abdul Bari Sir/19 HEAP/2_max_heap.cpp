#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}


void insert(int A[],int n)
{
int i=n;
int temp=A[n];
while(i>1 && temp>A[i/2])
{
    A[i]=A[i/2];
    i=i/2;
}
A[i]=temp;
}



void deleteElemnt(int A[],int n)
{
int x= A[1];
swap(&A[1],&A[n]);
int i=1,j;
n--;

while(2*i<=n)
{
if(A[2*i]>A[2*i+1] && A[2*i]>A[i])
{
        j=2*i;
        swap(&A[i],&A[j]);
        i=j;
}
else if(A[2*i+1]>A[2*i] && A[2*i+1]>A[i])
{
    j=2*i+1;
    swap(A[i],A[j]);
    i=j;
}
else
break;
}
}

int main()
{
    int A[]={0,10,7,34,27,75,19,17,31}; 
      //          1 2  3  4  5   6  7  8
     // ,34,7,10,27
    //75,34,19,31,27,7,17,10


    int n= sizeof(A)/sizeof(A[0]) -1;
    
    
    insert(A,2);
    cout<<endl;
    for(int i=1;i<=8;i++)
    {
        cout<<A[i]<<" ";
    }
    insert(A,3);

    cout<<endl;
    for(int i=1;i<=8;i++)
    {
        cout<<A[i]<<" ";
    }

    insert(A,4);
    insert(A,3);

    cout<<endl;
    for(int i=1;i<=8;i++)
    {
        cout<<A[i]<<" ";
    }
    
    



    return 0;

}