#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
string num ="328048";
//now lets sort decresingly
sort(num.begin(),num.end(),greater<int>());

int x = stoi(num); // converting the string to iteger

cout<<"the greatest integer is "<<x<<endl;
return 0;

}