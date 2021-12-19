#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:
    int id;
    string name;
    public:
   
    employee(string name="",int id=0)
    {
        this->name=name;
        this->id=id;
    }
    void setName(string str)
    {
        name=str;
    }
    void setId(int i)
    {
        id=i;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};

class fulltime:public employee
{
private:
float salary;
public:
fulltime(string name, int id, float salary):employee(name,id)
{
    this->salary=salary;
}
void setSalary(float sal)
{
    salary=sal;
}
float getSalary()
{
    return salary;
}
};

class parttime:public employee
{
    protected:
    float wages;
    public:
    parttime(string name , int id, float wages):employee(name,id)
    {
        this->wages=wages;
    }
    void setWages(float wag)
    {
        wages= wag;
    }
    float getWages()
    {
        return wages;
    }
};

int main()
{
    fulltime e1("avisek patra",194101,5678493.9);
    cout<<"name "<<e1.getName()<<", ID-"<<e1.getId()<<", salary "<<e1.getSalary()<<endl;
    parttime e2("sarthaka mahapatra",452327,75488.8);
    cout<<"name "<<e2.getName()<<", ID-"<<e2.getId()<<", salary "<<e2.getWages()<<endl;
    return 0;

}
