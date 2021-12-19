#include<bits/stdc++.h>
using namespace std;
 
 int a[100]; //we will declare a global variabel to store the values by the functions and it will be static in that functio
             //we wiil store value and check if the there is some recursive call with same parameter tehn instead 
            //calling it we will just return it , to check we will fillit with -1
 int fib(int n)
 {
     if(n<=1)  //base condition to check 
     {
         a[n]=n; //store the value in the array
         return n;
     }
     else
     {
         if(a[n-2]==-1)    //now we will check if n-1 have differnt value or not if not then we will call the fuction and keep asigning
         a[n-2]= fib(n-2);  //then in corespomnding array index we will assging the recursive call value 
         if(a[n-1]==-1)     //same here and we will use this saved values and give when required
         a[n-1]= fib(n-1);
         

        
         return  a[n-2]+a[n-1]; //and return the sumation valuewe find at the end
     }
 }

 

 int main()
 {
     int n;
     cout<<"enter the nth term\n";
     cin>>n;
     for(int i=0;i<=n;i++) //assign the value with -1  
     {
         a[i]=-1;
     }
    cout<<"the "<<n<<"th term is "<<fib(n)<<endl;
     return 0;
 }