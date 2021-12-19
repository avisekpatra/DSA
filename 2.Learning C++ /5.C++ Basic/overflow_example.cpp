#include<iostream>
using namespace std;

int main()
{  //rang of char is -128 to 127
  //icreachsing from the last of the range
    char x=127;
    x++;
    cout<<(int)x<<endl ; //Expected output  is -128
    //(int)x to type caste it to get the integer value

   //deccrasing from teh begining
   char y= -128;
   y--;
   cout<<(int)y<<endl; //expected output to be 127
    return 0;
}