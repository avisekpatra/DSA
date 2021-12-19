#include<iostream>
using namespace std;

int main()
{
    inr a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    int key;
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            cout<<"Element found at "<<i<<endl;
            return 0;   //if found the terminate the main function
        }
    }

    cout<<"not found\n";    //as the for loop is compmlity checked and the if staement is not triggered then print this
    return 0;
}