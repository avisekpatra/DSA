#include<iostream>

using namespace std;

class student
{
    public:
    string name;
    int roll;
    static int addno;
    //constructor
    student(string name)
    {
        roll=++addno;
        this->name=name;
    }
    void details()
    {
        cout<<"name is "<<name<<endl;
        cout<<"roll no is "<<roll<<endl;
    }
    static void totalAdd()
    {
        cout<<addno;
    }
    
};

//alaways remember to declare the static variabel glabally withn the scope of this class
int student::addno =0;

int main()
{
    student s("avisek");
    cout<<student::addno<<endl;
    s.details();
    student s1("raju");
    student s3("roli");
    cout<<student::addno<<endl;
    s3.details();

}