#include<iostream>
using namespace std;
void table(int n)
{
   int i=1;
while(i<=10)
{
    cout<< n <<" X "<<i<<" = "<< i*n <<endl;
    i++;
}

}

int main()
{ 
int n;
cin>>n;

table(n);

    return 0;
}