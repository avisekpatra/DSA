#include<iostream>
using namespace std;

class rational
{   private:
    int p,q;
    public:
    rational(int p=0,int q=0)
    {
        this->p=p;
        this->q=q;
    }
    friend rational operator+(rational r1,rational r2);
    friend ostream & operator<< (ostream &out , rational r);
    
};
    rational operator+(rational r1,rational r2)
    {
        rational r;
        r.p= (r1.p)*(r2.q) + (r2.p)*(r1.q);
        r.q= r1.q * r2.q;
        return r;
    }

    ostream & operator<<(ostream &out,rational r)
    {
       cout<<r.p<<"/"<<r.q;
       return out; 
    }

    int main()
    {
        rational r1(5,6),r2(5,7),r3;
        r3=r1+r2;
        cout<<r3<<endl;
        return 0;
    }