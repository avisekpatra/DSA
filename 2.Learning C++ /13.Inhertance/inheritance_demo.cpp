#include<iostream>
using namespace std;

class rectangel
{
    private:
    int len,bre;
    public:
    //constructor
    rectangel(int len=0,int bre=0)
    {
        this->len=len;
        this->bre=bre;
    }
    rectangel(rectangel &r)
    {
        len=r.len;
        bre=r.bre;
    }
    //mutators
    void setLen(int l){len=l;}
    void setBre(int b){bre=b;}
    //accseors
    int getLen(){return len;}
    int getBre(){return bre;}
    //facilitators
    int area();
    int perimeter();
    //enquiry
    bool isSquare();
    //destructor
    ~rectangel(){cout<<"rectangel destroyed";}

     
};

class cuboid:public rectangel
{
    private:
    int h;
    public:
    //constructor
    cuboid(int len, int bre, int h)
    {
        this->h=h;
        setLen(len);
        setBre(bre);
    }
    //mutator
    void setH(int h);
    //acssesors
    int getH(){return h;}
    //facilitators
    int volume();
    //operator overloading
    friend ostream & operator<<(ostream &out,cuboid &r);
};
ostream & operator<<(ostream &out , cuboid &r)
{
    cout<<r.getLen()<<" "<<r.getBre()<<" "<<r.h<<endl;
    return out;
}

int main()
{
    cuboid c(10,5,6),d(c);
    cout<<d.getLen()<<endl;
    cout<<d.volume()<<endl;
    cout<<d.area()<<endl;
    cout<<d.perimeter()<<endl;
    cout<<c<<endl;
    
    return 0;
}
int rectangel::area()
{
    return len*bre;
}
int rectangel::perimeter()
{
    return 2*(len+bre);
}
int cuboid::volume()
{
        return getLen() * getBre() * h;    
}




