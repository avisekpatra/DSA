#include<iostream>
#include<string>
typedef float marks;
using namespace std;

class student
{
private:

int roll;

string name;

marks phy;
marks chems;
marks maths;


public:
student(string name,int roll,int phy,int chems,int maths);

float total();

char grade();

~student();
};

int main()
{   int roll,phy,chems,maths;
    string name;
cout<<"enter name"<<endl;
getline(cin,name);
cout<<"Enter roll no\n";
cin>>roll;
cout<<"marks of physics, chemstry and maths\n";
cin>>phy>>chems>>maths;

student s1(name,roll,phy,chems,maths);
cout<<"total mark is "<<s1.total()<<endl;
cout<<"grade is "<<s1.grade()<<endl;
return 0;
}
student::student(string name,int roll,int phy,int chems,int maths)
{
    
   this->name=name;
   this->roll=roll;
   this->phy=phy;
   this->chems=chems;
   this->maths=maths;
}
float student::total()
{
    return phy + chems + maths ;
}
char student::grade()
{
    float avg = total()/3;

    if(avg>=90 && avg<=100)
    return 'A';
    else if(avg>=70 && avg<90)
    return 'b';
    else if(avg>=50 && avg<70)
    return 'c';
    else if(avg>=40 && avg<50 )
    return 'd';
    else
    return 'f';

}
student::~student()
{   static int count=1;
    cout<<"student s"<<count++<<" destroyed\n";
}


