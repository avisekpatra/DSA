#include<bits/stdc++.h>
using namespace std;

//remember the length of a string is no of charecters till '\0' 
int length(char str[])
{ 

    //using while loop
    int i=0;
    while(str[i]!= '\0') //we will just keep itirating till str[i] is not equal to '\0' cause when \0 means end of the string
    {
    i++;
    }

    return i; //as we have found '\0' at the ith index after the while loop so we will return the value
}

int main()
{
    char *name = "avisek"; //pointing a char pointer to string means creating the char array in the heap
    cout<<"length of the string is "<<length(name)<<endl;
    return 0;

}