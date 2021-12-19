#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10] ="ama";

    //first find the legth of the string in the array
    int length=0;
    while (str[length]!='\0')
    length++;

    //creating 2 pointers 
    int i=0; //iterator staring from the front
    int j=length-1; //iterator starting from last 

    bool check=1; //we will use it to verify 

    while (i<j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;         
        }
        else
        {
         check=0;
         break;
        }
       
    }

    if(check)
    cout<<"palindrome\n";
    else
    cout<<"not palindrome\n";
    return 0;
    
}