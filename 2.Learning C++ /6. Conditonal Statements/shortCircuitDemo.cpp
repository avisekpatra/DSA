#include<iostream>
using namespace std;
int main()
{
    int a=5,b=7,i=9;
    if(a>b && ++i>b)
    {
        /*as we can see that the  1st satement is false but in && both should be true 
        so it wont iterate to the next statment that means ++i wont take place and
         i value will still be same

            */
    }
cout<<i<<endl;// here i value will not change

//for or if one is true then it wont check the next one as it only required one  statement to be true
if(a<b || ++i>b)
{
    
} 
cout<<i<<endl; //still i will be same


    return 0;
}