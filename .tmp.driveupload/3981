#include<bits/stdc++.h>
using namespace std;

void perm(char str[],int k=0) //k will itratrear though result
{
    //creating a flag array to keep record who has been checked and who has not
    static int flag[10]={0};
    //creating anayher string to show different result, k will iterate through the aray result
    static char result[10];

    int i;//to intreate though flag and str

    //base condition when k reachs an index whwere the originsal string ends
    if(str[k]=='\0')
    {
        result[k]='\0'; //we wiill end the string in the result
        cout<<result<<endl; //then print the result
    }
    else
    {
        for(i=0;str[i]!='\0';i++) //iterate through the sring
        {
            if(flag[i]==0)  //we wil check is the index is marked or not
            {
                flag[i]++; //we will update the flahg index;
                result[k]=str[i]; //thenadd the ith element from str to the result string
                perm(str,k+1); //then again call the fuction to get the next elemnt
                flag[i]=0; //after returning from the recursive function and the the value at that time of time so we will againg check the for oop from 0 except them
            }
        }

    }
}

int main()
{
    char str[5]="abc";
    perm(str,0);
    return 0;
}