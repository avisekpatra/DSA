#include<bits/stdc++.h>
using namespace std;

 bool isSort(int Arr[],int n)
    {
    
        for(int i=0;i<n;i++)
        {
            if(Arr[i]>Arr[i+1])
            {
            return false;
            }
        }
        return true;
       
    }

    int main()
    {
        int a[10] ={0,1,2,3,4,5,6,7,8,9};
      
        cout<<isSort(a,10)<<endl;
        return 0;
    }

