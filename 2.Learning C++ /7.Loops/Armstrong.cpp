#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int n)
{   
     int digit;
     int sum=0;
     int original = n; //preserving the original value of n so that to check latter that if the no is == to the sum
   
    while(n>0)
    {
       digit=n%10;
       n/=10;
       sum = sum + pow(digit,3); 
    }

  if(sum==original)
  return true;
  else
  return false;

}

int main()
{
int n;
cin>>n;
 
if(armstrong(n))
cout<<"armstrong no\n";

else
cout<<"not armstrong\n";


    return 0;
}