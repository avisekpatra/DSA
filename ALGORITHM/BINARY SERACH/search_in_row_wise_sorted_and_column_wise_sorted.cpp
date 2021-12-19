//a 2d array is given 
//it is sorted row wise and coulumn wise
//we have to seach for a key


#include<iostream>
#include<fstream>
using namespace std;

//created a user defined data type to have 2 cordinates of the matrix
struct cordinates
{
    int x;
    int y;
    //initallaly filled it with -1 cause that cordinates dont exist in 2d matrix
    cordinates()
    {
        this->x=-1;
        this->y=-1;
    }

};


//function take 2d array and key
//and return the 
struct cordinates MatrixSearch(int n,int m,int arr[][4],int key)
{

    struct cordinates c;
    int mid= arr[m-1][n-1];
    int i=0;
    int j=n-1;
    while ((i<m && i>=0) && (j>=0 && j<n))
    {
         mid=arr[i][j];
         if(key==mid)
         {
            c.x=i;
            c.y=j;
            return c;
         } 
         else if(key>mid)
         {
             i=i+1;
         }
         else if(key<mid)
         {
             j=j-1;
         }
    }
    
    return c;

}

int main()
{
    int n=4;
    int m=4;
    int a[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    /*if(MatrixSearch(4,a,29))
    {
        cout<<"yes exist\n";
    }
    else
    {
        cout<<"not exit\n";
    }*/

    struct cordinates c;
    c=MatrixSearch(n,m,a,29);
    cout<<c.x<<" and "<<c.y<<endl;
    return 0;


}