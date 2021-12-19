#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    /*
    vector<int> v1;
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter the value\n";
        cin>>x;
        v1.push_back(x);
    }
    print_vector(v1);
    */
    //pair 
    pair<int,string> p;
    p=make_pair(1,"abc");
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}