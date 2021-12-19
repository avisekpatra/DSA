#include<bits/stdc++.h>
using namespace std;


//for sorted array
void difference(int a[],int n,int k)
{
    //by using 2 pointer arith matic
    int i=0; //starts from the 1st index
    int j=i+1; //starts from the 2nd index

    while(i<j)
    {
       if(a[j]-a[i]<k)
       j++;

       if(a[j]-a[i]>k)
       i++;

       if(a[j]-a[i]==k)
       cout<<a[j++]<<" and "<<a[i++]<<endl;
       
    }


}

int main()
{
    int a[10]={10,12,17,19,24};
  

    difference(a,10,7);
return 0;
}