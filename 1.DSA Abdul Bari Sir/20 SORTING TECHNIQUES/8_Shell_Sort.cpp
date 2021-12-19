#include<bits/stdc++.h>
using namespace std;

void shellsort(int A[],int n)
{
    int i,j,key,gap;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            key=A[i];
            j=i-gap;
            while (j>=0 && A[j]>key)
            {
               A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=key;
        }
    }
}

int main()
{
    int A[]={6,5,16,8,13,9,12,10,4,3};
    int n =sizeof(A)/sizeof(A[0]);
    shellsort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}