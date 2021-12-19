#include<iotream>
#include<fstream>  //we have to use the fstream libraries to perform accse ,read and write in a file
using namespace std;

int maiin()
{
    ofstream fout("note.txt",ios::app);  //here we have created a object of a built in class ofstream to accses a .txt file and wriet on it
     //ios::app means taht there is already a file exist and we are just adding new texts without erasing it
    fout<<"my anme is avisel \n and i am a softwear enginear \n but i dont know how to code\n";
    fout<<"thank you\n";
    fout.close();     //we must close the file we open at the end

return 0;
}