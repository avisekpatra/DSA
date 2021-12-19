#include<bits/stdc++.h>
using namespace std;

class element
{
    int i; //index of row 
    int j; //inrdex of column
    int x; //non zero elemnt in the matrix
};

class matrix
{
    public:
    int m; //no of rows 
    int n; //no of column
    int num; //total no of non zero elemnt in the array 
    element *ele;
public:
//constructdor
matrix(int m,int j,int num);
void create();




};

matrix::matrix(int m,int j,int num)
{
    this->m=m;
    this->n=n;
    this->num=num;
    ele= new element[num]; //creating an array of object of elemnt of size num
}

void matrix::create()
{
    cout<<"enter thr cordinates and value of the no non zero elemnts from the sparse matrix\n";
    cout<<"enter in the format row-column-elemnt\n";
    for(int i=0;i<num;i++)
    {
        cin>>ele[i].i<<ele[i].j<<ele[i].x;
    }
}

void matrix::display()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ele[i].i==i && ele[j].j==j)
            cout<<ele[i].x<<"\t";
            else
            cout<<"0\t";
        }
        cout<<endl;

    }
}
matrix* add(matrix m1,matrix m2)
{
    matrix res(m1.m,m1.n,m1.num+m2.num);

int i=0;
int j=0;
int k=0;

 while(i<m1.num && j<m2.num)
 {

    if(m1.ele[i].i < m2.ele[j].i)
    {
        res.ele[k]=m1.ele[i];
        k++;
        i++;
    }
    else if(m1.ele[i].i>m2.ele[j].i)
    {
        res.ele[k]=m2.ele[j];
        k++;
        j++;
    }
    else if(m1.ele[i].i==m2.ele[j].i)
    {
        if(m1.ele[i].j<m2.ele[j].j)
        {
        res.ele[k]= m1.ele[i];
        k++;
        i++;
        }
        else if(m1.ele[i].j>m2.ele[j].j)
        {
            res.ele[k]=m2.ele[j];
            k++;
            j++;
        }
        else if(m1.ele[i].j==m2.ele[j].j)
        {
            res.ele[k].i= m1.ele[i].i;
            res.ele[k].j=m1.ele[i].j;
            res.ele[k].x=m1.ele[i].x + m2.ele[j].x;
            k++;
            i++;
            j++;
        }
    }
 }


}

