#include<bits/stdc++.h>
using namespace std;


void days(int a[],int n)
{
    if(n==1)
    {
       cout<<0<<endl;
       return ;
    }

    int max=INT_MIN;
    int maxi=0;
    int record=max;
    count=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(a[i]>a[i+1])
            {
                maxi=i;
                count++;
                cout<<maxi<<endl;
                continue;
            }
        }
        else if(i==n-1)
        {
            if(a[i]>a[maxi])
            {
               maxi=i;
               count++;
               cout<<maxi<<endl;
               break;
            }
        }
        else
        {
            if(a[i]>a[i+1] && a[i]>a[maxi])
            {
                maxi=i;
                count++;
                cout<<maxi<<endl;
            }
        }
    }

    return count;
}

int main()
{
    int a[]={1,2,0,7,2,0,2,2};
    days(a,8);

    return 0;
}