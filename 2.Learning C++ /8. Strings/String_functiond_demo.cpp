#include<iostream>
#include<string> //to acsees string functions
#include<algorithm>  //for using sort
using namespace std;

int main()
{
    //declaration
string str ="Avisek";
string str= "lol";

//taking string input
string s;
cin>>s; //this will take a sigle word or thill it find a space

getline(cin,s); // to take a line input or 

//asign
s.assign("fuckoff");


//append
str.apend(str2);
cout<<str+str1<<endl;


//return the char  at a particular position
cout<<s[1];
cout<<s.at(1);

//clear fuction
s.clear();

//compare
if(str.compare(s)==0); //comapare if the string ia same or not then return integer value if -ve means the comaprig string is bigger
cout<<"equal";
else
cout<<"not equal";


//empty()
cout<<str.empty(); //return boolean value


//erase . to delete a particular substring from a index and no of elemnt to be erased
//syntax is str.erase(index,no of charecters)
str.erase(1,2);


//find() to find if a particular substring is presnt or not 
//if present return the begining index where

str.find("vise");  //if present then return the index of V AS IT IS the 1st elemnt


//insert      sayntax = str.insert(index where,string to be inserted)
string s="iyou";
string s2 = "love";

s.insert(1,s2);
//or
s.insert(1,"love");


//length and size
string str3 = "iesbFJBJAKEBFKAJFBJdenfbewj";
int n = str3.length(); //gives the no of elemnts in the string
//or
int n-str3.size();

//insert(index,string to be inserted)
    string str = "ibatman";
    string str1="am";  
    str.insert(1,str1);  
    //or
    str.insert(1,"am");
    cout<<str<<endl;


    //substr()             substreing this fuction return a substreeing from a index to a particular size
    //syntax str.substr(index,no of charecter including and after the index) 
str.substr(4,5);

//stoi(string itself)  string to integer  
string num= "754875";
int n = stoi(num);


//integer to string
int x=1990;
string num1=to_string(x); //convert the string into integer and store in num1

//sorting we use a HEADERFILE  ALGORITHM
string str7="asaghsys9wdnwmdb";
sort(str.begin(),str.end()); //it dwillsort the string in a alphabert manner





}
