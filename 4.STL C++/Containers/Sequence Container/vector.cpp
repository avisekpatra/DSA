#include<vector>
#include<iostream>
using namespace std;

int main()
{ 
    vector<int> v;
    vector<int> a(5,1);  //this to create an vector of size 5 and fill them with 1

    //to copy a vector to anaother vector
    vector<int> a(v);    //that is v will be copied to a

//we can use for loop to see the values
for(int i,a)
{
    cout<<a<<"\t";
}    
    cout<<v.capacity()<<endl; //to know the capacity of the vector that is how much element it can store in it
  
    //to add element in the vector 
    v.push_back(789);  
    v.push_back(8);
    v.push_back(56);
    v.push_back(78);
    v.push_back(849);
    v.push_back(678);

    //to delete or pop the last added element
    v.pop_back(); //delte the last elemnet here it is 678;
    v.pop_back(); //delete the last ement that is 849 as one elemnt is revomed


    cout<<v[2];  //to show a ement in an perticular index
    cout<<v.at(2); //show the perticular element at that perticular index

    cout<<v.size(); //show the no of elment present in the vector
   
   cout<<v.front(); //shows the 1st elemnt
   cout<<v.back(); //show the last element

    cout<<v[0]<<endl;  //to deisplay element

    v.clear(); //to clear all the elemnt n the vector
    

    return 0;
}