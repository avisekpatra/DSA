#include<iostream>
using namespace std;

int main()
{
     int row1,col1;
     cin>>row1>>col1;
     int a[row1][col1];
    
     for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>a[i][j];
        }
    }
      
     int row2,col2;
     cin>>row2>>col2;
     int b[row2][col2];
    
     for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>b[i][j];
        }
    }

if(col1!=row2)
{
    cout<<"Can not be multiply\n";
    retun 0;
}





    return 0;
}