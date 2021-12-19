#include<bits/stdc++.h> //can acces every header files required
using namespace std;

int main()
{
   //for writting
    ofstream fout("my.txt",ios::trunc);
    fout<<"i am batman"<<endl;
    fout<<"yo yo "<<endl;
    fout.close();
   
    //for reading
    ifstream fin;
    fin.open("my.txt");
    string str;
    string str1;
    getline(fin,str);
    getline(fin,str1);
    cout<<str<<"\n"<<str1<<endl;
    return 0;
}