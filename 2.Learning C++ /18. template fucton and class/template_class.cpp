#include<iostream>
using namespace std;

template<class t>
class arithmatic
{
public:
t add(t a,t b);
t minus(t a,t b);
t multiply(t a,t b);
t divide(t a,t b);
};


template<class t>
t arithmatic<t>::add(t a,t b)
{
    return a+b;
}

template<class t>
t arithmatic<t>::minus(t a,t b)
{
    if(a>=b)
    return a-b;
    else if (a<b)
    return b-a;
}

template <class t>
t arithmatic<t>::multiply(t a,t b)
{
return a*b;
}


 template <class t> 
 t arithmatic<t>::divide(t a,t b)
 {
     if(b==0)
       throw 0;
 return a/b;
 }



int main()
{
    arithmatic<int> a;
    a.add(10,7);
    a.divide(5,0);
    a.minus(7,8);
    a.multiply(7,8);

    arithmatic<float> f;
    f.add(5.6,9.8);
    f.minus(8.9,3.3);
    f.multiply(4.3,8);
    f.divide(10.0,2);


   
    return 0;
}

