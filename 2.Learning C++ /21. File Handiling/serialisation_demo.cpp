#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &obj,student &s);  //we just have to oerload the operator >>
    friend ifstream & operator>>(ifstream & in,student &s);

};
//for writing
ofstream & operator<<(ofstream &obj,student &s)
{ 
obj<<s.name<<endl;
obj<<s.roll<<endl;
obj<<s.branch<<endl;
return obj;
}
//for redeating
ifstream & operator>>(ifstream &in,student &s)
{
    in>>s.name>>s.roll>>s.branch;
    return in;


}

int main()
{
    student s1;
    s1.name = "avisek patra";
    s1.roll= 13;
    s1.branch= "cse";

//for writing in the file
ofstream fout("student.txt",ios::trunc);
fout<<s1; //as we ave overlaode the operator this will now directly store the object in the ofstream fout


//for reading
student s1;
ifstream fin("student.txt");
fin>>s1;

cout<<s1

fout.close();1
}