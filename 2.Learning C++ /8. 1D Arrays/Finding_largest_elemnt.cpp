#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,8,9,10,11,5,87,7,67,9};
    int max = INT_MIN; //initially i am initialising the minimum posibile value which is a constant in c++
    for(int i=1;i < 10;i++)
    {
       if(arr[i]>max)
       max= arr[i];
    }

    cout<<max<<endl;

    return 0;
}