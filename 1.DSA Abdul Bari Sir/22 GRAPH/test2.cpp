#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int, greater<int> > s;
    s.insert(7);
    s.insert(1);
    s.insert(15);
    s.insert(8);
    s.insert(7);
    s.insert(2);
    
    
    

    set<int> ::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<(*i)<<endl;
    }
    return 0;
}