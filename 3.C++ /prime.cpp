#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=2;
    if(n<=1)
    { cout<<"not prime\n";
    return 0;
    }
    else if(n>=2)
    {
        for(int i =2;i<=n;i++)
        {
            for(int j = 2;j<i;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }

            }
          if(count==2)
          cout<<i<<"\n";
          else
          continue;

        }
    }
    
    return 0;
}