#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

    int key;
    cin>>key;

    int begin=0;  //initially at the begining
    int end=n-1;  //initially at end
    
   
   while(end>=begin)  //cause when end will be high means the no does not exist 
   {
    mid=(begin + end)/2;
    if(a[mid]==key)
    {
        cout<<"found at "<<mid;
        return 0;
     }

     else if(a[mid]>key)
     end=mid-1;

     else if(a[mid]<key)
     begin= mid+1;
   }

   cout<<"not found\n";
   return 0;



















}