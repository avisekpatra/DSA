#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,4,5,6,7,9,10,11,12};  //craeting a object of vector
    //adding new values
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    //deleteing value the lst added elemnt
    v.pop_back();

    //to know the size
    cout<<"size is "<<v.size();


    vector<int>:: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)  //begin return the start of a collection and end gives the end of a collection
    cout<<*itr<<endl; //derefernacing the itr to show the value


    return  0;
}