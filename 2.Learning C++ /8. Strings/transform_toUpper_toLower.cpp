#include<iostream>
#include<string>
using namespace std;

int main()
{
   string str ="i am not a good person";

   //using buit in function
   transform(str.begin(),str.end(),str.begin(),:: toupper);
   cout<<"the uppercase version"<<str<<endl;
   transform(str.begin(),str.end(),str.begin(),::tolower);
   cout<<"the lowercase version"<<str<<endl;

    //using for loop
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;     //32 as the difference between a-A = 32 i.e 92-65=32 
    }
    cout<<"the upeercase version using for loop is "<<str<<endl;

   return 0;

}
