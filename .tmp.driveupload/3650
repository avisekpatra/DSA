#include<bits/stdc++.h>
using namespace std;

void reverse(char *str)
{
    //1st we will find the length of the string
    int length=0;
    while (str[length]!='\0')
      length++;
    
    
   int i=0;
   int j=length-1; //as at the length index there is the '\0' string terminator is there so we will start swaping before the string delimater

   //now we have sucesssfully reveeseed the string
   while(i<j)
   {
       char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;  //must remeber to increment i to go to next ekemnt
        j--;   //must decrement to j as it is traversing backward
   }   


}

int main()
{
    char name[10]="avisek"; //remeber in mordern compiler string are imutabel so string must be declares like this 
    reverse(name);
    cout<<name<<endl;
    return 0;
}