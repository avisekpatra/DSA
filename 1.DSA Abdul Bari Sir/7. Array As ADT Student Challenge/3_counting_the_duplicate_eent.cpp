#include<bits/stdc++.h>
using namespace std;

void CountDuplicate(int A[],int n)
{ 
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1])
        {
            int j=i+1;
            while(A[j]==A[i])
            j++;
            cout<<A[i];
            cout<<"repeatation is"<<j-i;
            i=j-i;
         }
    }
}

int main()
{
    int A[10]={1,1,2,3,3,5,6,6,6,6};
    CountDuplicate(A,10);
    return 0;
}