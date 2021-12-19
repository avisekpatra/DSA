#include<iostream>
using namespace std;

template<class F>

F maxim(F a,F b)
{
    return a>b?a:b;
}

int main()
{
    cout<<maxim(10,78)<<endl;  //integer arguments 
    cout<<maxim(2.6,6.4)<<endl;   //double arguments
    cout<<maxim(3.25f,78.5f)<<endl;   //float arguments
    return 0;
}


//note
//remember in template we xcan only pass argument of same type different type can not be entered 
//like example  maxim(2.5,3.6f);  onr is double and oter is float type