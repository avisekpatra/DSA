#include<bits/stdc++.h>
using namespace std;

void Duplicate(int A[],int n)
{
    int dublicate=-1; //we will update this and use it to avoid printing the duplicate elemnt multiple time 
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] && dublicate!=A[i])  //checking if the duplicate elemnt is not repeating ta 
        {
            cout<<A[i]<<endl;
            dublicate=A[i];  //must assihgn the duplicate elemnt with the cure
        }
    }
}