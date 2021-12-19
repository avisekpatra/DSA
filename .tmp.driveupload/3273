#include<bits/stdc++.h>
using namespace std;

void Duplicate(int A[],int n)
{
    int min=INT_MAX;
    int max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max) max=A[i];

        if(A[i]<min) min=A[i];
    }
    int size=max+1;
    int H[max+1];  
    for(int i=0;i<size;i++)  //we will assign all values in the hash tabel with 0 ,why? cause we are also counting the repeation so 
    {
        H[i]=0;    
    }
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    for(int i=min;i<size;i++)
    {
        if(H[i]>1)
        {
            cout<<i<<" is repeated "<<H[i]<<" times\n";
        }
    }

}


int main()
{
    int A[10]={1,1,1,2,3,4,4,4,4,5};
    Duplicate(A,10);
    return 0;
}