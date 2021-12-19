#include<iostream>
using namespace std;

class test
{
private:
int *p ; //for dynamic memoey is created
ifstream fis; //craetion to read a file;
public:
test()
{
    cout<<"object is created\n";
    *p = new int[10]; //dynamic memory alocated
    fis.open("file.txt"); //we can and suppose to open a file ineside a constructor

}

~test()  //constructor
{
    cout<<"object is destroyed\n";
    delete *p; //we have to delaet a heap memmory manuall writting delete and it is done inside the destructor
    fis.close(); // and also we have close the file wehave opened in the destructor
}

};