#include<bits/stdc++.h>
using namespace std;
 //to convert it to a lower caser

int main()
{
    char str[] ="AVISEK";
    cout<<"uperr case "<<str<<endl;
    int i=0;
    while(str[i]!='\0')
    {
        str[i]= str[i]+32;//as the differenvce betwee A=65 and a=97 is 32 acording to ASCII so by adding the ASCCI code of uppercase with 32 we will get the coresponding small letter 
        i++;
    }
    cout<<"lower case "<<str<<endl;
    return 0;
}