#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str ="gdsdjhnfdjvbaergsdfnvasdccefj";
    int count[26]; // creating a array to store which alphaber repeat how much time

//initialize the count array with 0
for(int i=0;i<26;i++)
{
    count[i]=0;
}

//no filling the count array witth alphabet repeataion
for(int i=0;i<str.size();i++)
{
    cout[s[i]-'a']++; //this will increase the value on the coresponding alphabets as s[i]-'a' will give the exact index dor each alphabet
}

//now checking which one is the max
int max = INT_MIN;

for(int i=0i<26;i++)
{
if(count[i]>max)   //as we just want to find the 1st alphabets which is more,even if repeatation is there
{
    max= count[i];
    index = i;
}
}

cout<<

    return 0;
}