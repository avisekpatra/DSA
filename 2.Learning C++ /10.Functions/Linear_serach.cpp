#include<iostream>
using namespace std;

int find(int a[], int n , int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        return i;
    }

    return -1;
}
int main()
{
    int n;
    cout<<"enter the lenth of array\n";
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"enter the elemnt you want to find\n";
    cin>>key;
    int index = find(a,n,key);
    if(index==-1)
    cout<<"not found\n";
    else
    cout<<"found at position "<<index<<"\n";
    return 0;

}