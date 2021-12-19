#include<iostream>
using namespace std;

int main()
{
int range,num;
cin>>range>>num;

for(int i=1;i<=range;i++)
{
    if(i%num==0)
    continue;
    else
    cout<<i<<endl;
}

return 0;
}
