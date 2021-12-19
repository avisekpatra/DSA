#include<bits/stdc++.h>
using namespace std;
//brute force approach
void sumk(int A[],int n,int k)
{
    for(int i=0;i<n;i++) //iteraye every elemnt
    { 
         int x=k-A[i]; //if we have A[i] then we have to find anather no A[j] whoxe sum should be equAL  to k so A[j] must be K-A[i]
        for(int j=i+1;j<n;j++)  //picking A[i] then check with the rest of the elemnt in forward
        {
            if(A[j]==x)  //we can also check like (A[i]+A[j]==k)
            {
                cout<<A[i]<<" at index "<<i<<" and "<<A[j]<<" at index "<<j<<endl;
            }

        }
    }
}

//this methode is of O(n2) slow 

int main()
{
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    sumk(A,10,13);
    return 0;
}