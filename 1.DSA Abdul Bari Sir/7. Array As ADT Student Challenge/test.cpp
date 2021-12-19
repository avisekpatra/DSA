#include<bits/stdc++.h>
using namespace std;

void MultipleMissing(int A[],int n)
{

    int def=A[0];
    for(int i=0;i<n;i++)
    {
        if((A[i]-i)!=def)
        {
            for(int j=1;j<(A[i]-A[i-1]);j++)
            {
              cout<<A[i-1]+j<<"\t";
            }
        }
    }
}

int main()
{ int A[10]={5,6,7,8,9,11,13,15,18,21};
MultipleMissing(A,10);
cout<<endl;

    return 0;
}