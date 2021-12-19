#include<bits/stdc++.h>
using namespace std;

void swaping(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

int KthSmallestElement(int A[],int n,int k)
{


int min;
int min_index;
for(int i=0;i<n-1;i++)
{
    min=INT_MAX;
    int j=i;
    while (j<n)
    {
        if(A[j]<min)
        {
            min=A[j];
            min_index=j;
        }
        j++;
    }
    swaping(&A[i],&A[min_index]);
}

return A[k-1];

}


int main()
{
    int A[]={5,8,2,7,2,1,9};
    int n=sizeof(A)/sizeof(A[0]);
    int x=KthSmallestElement(A,n,4);
    cout<<"the 3rd smallest elemnt in the array is "<<x<<endl; //5
    return 0;
}