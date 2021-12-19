#include<iostream>
#include<cmath>
using namespace std;

int main()
{
float x1,x2,y1,y2,distance;
cout<<"enter the co-ordinates of 1st pount\n";
cin>>x1>>x2;
cout<<"enter the co ordinates of 2nd point\n";
cin>>y1>>y2;
distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout<<"the distance between those points is "<<distance<<endl;
    return 0;
}