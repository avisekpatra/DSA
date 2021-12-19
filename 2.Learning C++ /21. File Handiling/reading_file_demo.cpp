#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    //1st we create a object of ifstream class which is used to read the file
    ifstream fin;     //we canalso write liek ifstream fin("my.txt");
    fin.open("my.txt"); //this is how to open the file 

    //now we have to create variabel like string or integer depneding what the file is storing remeber this will be differ depending on which format it is dtoring
    string str; // for reading string value in the 1st line 
    int x;    //for reading integer value at 2nd line asuming there
    fin>>str; //now we stored what string value at 1st line in the my.txt in the stirng str
    fin>>x;  //now we have stored the integer value that is in the 2nd line of the file
    //or we can also write fin>>str>>x like variabel
   
    //now we have to check that if the file is existing or not ,if not then print a message  for it that the file is missing or cannot be oppend
    if(!fin)
    cout<<"file is missing"<<endl;
   //or we can write like this
   //if(!fin.is_open())
   //cout<<"file is missing"

   //now we cheek is we have reached the end of the file or no fo that we wil write
   if(fin.eof())
   cout<<"end of the file reaced\n";

   //then as we have opened the file now we have to close it too
   fin.close();

    return 0;
}