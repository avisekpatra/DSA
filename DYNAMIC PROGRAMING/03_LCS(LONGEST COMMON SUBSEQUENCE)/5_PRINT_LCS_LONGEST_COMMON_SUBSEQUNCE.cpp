#include<iostream>
#include<string>
using namespace std;

string LCS(string str1,string str2)
{
    //first we will fill the lcs top down table
    int l1=str1.length();
    int l2=str2.length();

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
                DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }


    //now we will fin the string starting from the last right down element that si at
    //starting from the element at DP[l1][l2];
    int i=l1;
    int j=l2;

    string lcs="";
    //now using a while loop we will great the reverswe string as we are starting from the end
    while (i>0 && j>0)
    {
        //is the charecter match the this is the char so we will ad it to our new string
        if(str1[i-1]==str2[j-1])
        {
            lcs+=str1[i-1];
            i--;
            j--;
        }
        //if not match find the max elemnt among the 2 part from the find max length
        //and based on that we will modify i and j
        else
        {
            int r1=DP[i-1][j];
            int r2=DP[i][j-1];
            if(r1>r2)
            {
                i=i-1;
            }
            else
            {
                j=j-1;
            }
        }
    }
    

    //after getting the string we will reverse it as it is the 
    //reversing the string
    int lcs_len= lcs.length();
    i=0;
    j=lcs_len-1;
    while (i<j && j>=0)
    {
        char c=lcs[i];
        lcs[i]=lcs[j];
        lcs[j]=c;
        i++;
        j--;
    }
    

    return lcs;
    
}


int main()
{
    cout<<LCS("acbcf","abcdaf")<<endl;
    return 0;

}