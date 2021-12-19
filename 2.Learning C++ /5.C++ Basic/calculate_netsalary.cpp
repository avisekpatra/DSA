#include<iostream>
using namespace std;

int main()
{
  float basicSalary,allowances,deduction,netSalary;

  cout<<"Enter Your Basic salary please \n";
  cin>>basicSalary;

cout<<"Enter the percentages of Allowances \n";
cin>>allowances;

cout<<"Enter the percentages of Deduction \n";
cin>>deduction;

netSalary= basicSalary + basicSalary*allowances/100 - basicSalary*deduction/100;
cout<<"your net salary is Rs "<<netSalary<<endl;
return 0;
}