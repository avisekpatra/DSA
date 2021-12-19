#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int p,n; //counter for positive and negative no

for(auto x: a)  //for each loop in c++11
{
    if(x>0)
    p++;
    else if(x<0)
    n++;

}

//using normal for loop
for(int i=0;i<n;i++)
    {
    if(a[i]>0)
    p++;
    else if(a[i]<0)
    n++;
    }

cout<<"no of positive no is:"<<p<<endl;
cout<<"no of negative no is:"<<n<<endl;

return 0;


}