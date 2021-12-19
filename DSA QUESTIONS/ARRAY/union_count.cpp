#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
      int i=0;
      int j=0;
      int count=0;
      while(i<n && j<m)
      {
          if(a[i]!=b[j])
          count+=2;
          else
          count+=1;
          
          i++;
          j++;
      }
      
      while(i<n)
      {
      count++;
      i++;
      }
      
      while(j<m)
      {
      count++;
      j++;
      }
      
      return count;
    }

    int main()
    {
        int a[]={1,2,3,4,5,7,3,4,5,6,7,8};
        int b[]={1,2,7,8};
        int n=5;
        int m=4;
        cout<<doUnion(a,n,b,m)<<endl;
        return 0;
    }