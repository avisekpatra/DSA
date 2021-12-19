#include<array> //must include array header file
#include<iostream>
using namespace std;

int main()
{
    //declaration adn intialisation
    array<int,5> a ={1,2,3,4,5};

    int n= a.size(); //to knnow the no of elements in the array
    //itrate throw an array, we can also use for eahh loop
    for(int i =0;i<a.size();i++)
    {
     cout<<a[i]<<"\t";
    }
    
    if(a.empty())  //check if any ements are  present or not and return a bool value
    cout<<"array  is empty\n";
    else
    cout<<"not empty\n"; 

    cout<<"the 1st element of the array is "<<a.front()<<endl;  //return the 1st element
    cout<<"the last element of the array is "<<a.back()<<endl;  //return the last element

    cout<<"element at index no 3 is "<<a.at(3)<<endl; //it return the elemnt present in that particular index

}