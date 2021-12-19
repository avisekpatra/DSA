#include<bits/stdc++.h>
using namespace std;

int main()
{
    //in c++ we use "new" keyword to create heap memmory
    int *p = new int[5];
    //here we can aslo assign valuue in p[1]=value or for loop
    //we can use for loop for travesring
    for(int i =0;i<5;i++)
    {
        cin>>p[i];
    }
      for(int i =0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    //we have to delete  teh heap memmory created 
    delete []p; //[] because it is an array if its just a static variabel only delete p;
    return 0;
}