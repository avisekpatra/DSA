#include<bits/stdc++.h>
using namespace std;

class item
{
public:
string name;
float price;
int quantity;

friend ofstream & operator<<(ofstream &f ,item it);

};
ofstream & operator<<(ofstream &f ,item it)
{
    f<<it.name<<endl;
    f<<it.price<<endl;
    f<<it.quantity<<endl;
    return f;
}

int main()
{
    item i;
    i.name = "balaji nadhia tela";
    i.price= 56.7f;
    i.quantity = 100;
    ofstream fout("item.txt",ios::trunc);
    fout<<i; //this must take evrything in the object and write in the .tx file
     

     //for reading
     ifstream fin("item.txt");

    return 0;
}



