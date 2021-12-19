#include<iostream>
#include<climits>
using namespace std;

int celingNum(int arr[],int n,int key)
{
    int i=0;
    int j=n-1;
    int mid;

    while (i<=j)
    {
      mid=(i+j)/2;
      /*
      if(i==j)
      {
          if(key>arr[mid])
          {
          if(mid==n-1)
          return -1;
          else
          return arr[mid+1];  
          }
          else if(key<arr[mid] || key==arr[mid])
          {
              return arr[mid];
          }
      }
      */

      if(key==arr[mid])
      {
          return arr[mid];
      }
     
      else if(key<arr[mid])
      {
          j=mid-1;
      }
     
      else if(key>arr[mid])
      {
          i=mid+1;
      }
    }
   //for floor no
   /*
    if(j<0)
    return -1;
    else
    return arr[j]; 
    */
   //for celing no
   if(i>n-1)
   return -1;
   else
   return arr[i];
    
}


int main()
{          
    int A[]={4,5,7,12,14,15};
    int n= sizeof(A)/sizeof(A[0]);
    int c= celingNum(A,n,13);
    if(c==-1)
    cout<<"no celing value\n";
    else
    cout<<c<<" is the celing num\n";
    return 0;
}

