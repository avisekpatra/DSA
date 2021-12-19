#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
          return i;
        }
    }

   return -1;
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i =0;i<n;i++)
{
    cin>>a[i];
}

int key;
cout<<"Enter the ement you want to search \n" ;
cin>>key;

int num = search(a,n,key) ;
if(num==-1)
cout<<"not found\n";
else
cout<<"found at "<<num<<" index \n";

    return 0;
}