#include<iostream>
using namespace std;

bool palindrome(int n)
{

int digit;
int rev=0;
int original = n; //to presevr the value of n for comparison purpose

while(n>0)
{
    digit = n%10;
    n/=10;
    rev= rev*10 + digit;
}

if(rev==original)
return true;
else
return false;

}

int main()
{
    int n;
    cin>>n;

    if(palindrome(n))
    cout<<"it is a palindrome\n";
    else
    cout<< "it is not a palindrome\n";


    return 0;
}