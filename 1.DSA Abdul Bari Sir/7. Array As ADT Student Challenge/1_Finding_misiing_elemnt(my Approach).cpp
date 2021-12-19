#include<bits/stdc++.h>
using namespace std;


//for singel missing elemnt in a sorted array using formulae
//for single missing elemnt in an sorted array
int SingleMisiing(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(!(A[i]+1==A[i+1]))
        return A[i]+1;
        
    }
    return -1;

}

//finding missing single elemnet using formula
void SingleMising(int A[],int n)
{
    int nsum= (n*(n-1))/2; //forula to fin sum of 1st n terms
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }
    
    int x=nsum-sum;
    cout<<"missing element is "<<x<<endl;
    
}

//finding missing single elemnet by comparing the difference betweeen them
void SingleMissing(int A[],int n)
{
    int def=A[0]; //based on first find the difference between the elemnt in the index  and the index ,then check where the differnce is different menas undex +diff is the missing number
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=def)
        {
            cout<<A[i]+i<<" is the missimg number\n";
            break;
        }
    }
} 

//for finding multiple millsinng elemnt in sorted array between A to B
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




//for multiple missing element in an sorted array
void MultipleMisiing(int A[],int n)
{  
    int size=A[n-1]+1;
    int B[size];
    for(int i=0;i<size;i++)
    {  
        B[i]=-1;
    }


    for(int i=0;i<n;i++)
    {
        B[A[i]]++;
    }

    for(int i=0;i<size;i++)
    {
        if(B[i]>=A[i] && B[i]==-1)
        {
            cout<<i<<"\t";
        }
    }

}

//for unsorted missing elemnt
void UnsotedMissing(int A[],int n)
{
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];

        if(A[i]<min)
        min=A[i];
    }
    
    int size=max+1;
    int B[size];
    
    for(int i=0;i<size;i++)
    {
        B[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        B[A[i]]++;
    }

    for(int i=0;i<size;i++)
    {
        if(i>=min && B[i]==-1)
        cout<<i<<"\t";
    }
    cout<<endl;

}

int main()
{
    int A[10]={9,5,4,7,3,6,12,14,20,34};
   
    UnsotedMissing(A,10);
    return 0;

}