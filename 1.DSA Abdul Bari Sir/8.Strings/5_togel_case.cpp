#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10]="aViseK";
    
    int i=0;

    while(str[i]!='\0')
    {
        //to covert upercase to lower case .     (A=65 to Z=90) is the upper case range
        if(str[i]>=65 || str[i]<=90)
        str[i]+=32;

        //to convert lowercase to upper case .    (a=97 to z=122) is the lower case range
        else if(str[i]>='a' || str[i]<=122)
        str[i]-=32;

        i++; //always rembember to increase the in the while loop
    }
    cout<<"new toggel case string is \n"<<str<<endl;


    return 0;
   
}