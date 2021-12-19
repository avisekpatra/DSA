#include<bits/stdc++.h>
using namespace std;

bool isFeasable(int paintings[],int n,int m,int limit)
{
    int painters=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=paintings[i];
        if(sum>limit)
        {
            painters++;
            sum=paintings[i];
        }
    }

    if(painters>m)
    return false;
    else 
    return true;

}

int PainterPartion(int painting[],int n,int m)
{
    //we will find the maximum time taken by a sigle painting
    //total time taken to finish all painting
    int max_time_painting=INT_MIN;
    int totalTime=0;
    for(int i=0;i<n;i++)
    {
        max(max_time_painting,painting[i]);
        totalTime+=painting[i];
    }

    int start=max_time_painting;
    int end=totalTime;
    while (start<=end)
    {
        int mid= start+ (end-start)/2;
        if(isFeasable(painting,n,m,mid))
        {
          end=mid;
        }
        else
        {
          start=mid;
        }
    }
    
return start;
}

int main()
{
    int a[]={10,20,30,40};
    int n=sizeof(a)/sizeof(a[0]);
    int m=2;
    cout<<PainterPartion(a,n,m)<<endl;
    return 0;
}