#include<iostream>
using namespace std;
int main()
{
int arr[] ={2,6,87,34,78,9,23,56};
int sum=0;
for(int n : arr)
{
    sum+=n;
}

cout<<sum<<"is the sum of all elments int the array is \n";


    return 0;
}