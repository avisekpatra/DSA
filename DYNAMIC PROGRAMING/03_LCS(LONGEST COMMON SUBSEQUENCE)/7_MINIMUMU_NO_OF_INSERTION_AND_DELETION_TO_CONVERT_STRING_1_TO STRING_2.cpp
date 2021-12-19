#include<bits/stdc++.h>
using namespace std;

int lcs(string str1,string str2)
{
    int l1= str1.length();
    int l2= str2.length();

    int DP[l1+1][l2+1];

    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0 || j==0)
            DP[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            {
                DP[i][j]= 1+ DP[i-1][j-1];
            }
            else
            {
                DP[i][j]=max(DP[i][j-1],DP[i-1][j]);
            }
        }
    }

    return DP[l1][l2];
}


void min_deletion_and_insertion_to_convert_str1_to_str2(string str1,string str2)
{
    //we are tring to convert str1 to str2
    //first we will find the lcs
    
    //so minimum no of deletinon is is no which are not common in the string 2 to string 1
    //deltion = str2.length() - lcs(str1,str2)

    //minimum no of insertion in the string2 is the no of no string which is not common in string1
    //insertion = str1.length() - lcs(str1,str2)
    
    int str1_length=str1.length();
    int str2_length=str2.length();
    int lcs_of_str1_and_str2=lcs(str1,str2);

    int min_no_insertion=str1_length - lcs_of_str1_and_str2;
    int min_no_deletion=str2_length - lcs_of_str1_and_str2;

    cout<<"minimum no of charecter required to delete :"<<min_no_deletion<<endl;
    cout<<"minimum no of chrecter required to insert: "<<min_no_insertion<<endl;
    
}

int main()
{
    min_deletion_and_insertion_to_convert_str1_to_str2("def","ahdbrd");

    return 0;
}