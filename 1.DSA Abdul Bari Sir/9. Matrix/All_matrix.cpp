#include<bits/stdc++.h>
using namespace std;

class Matrix
{
    int n;
    int *p;

private:
Matrix(int n);
int Dimension();
void set(int i, int j,int x);
int get(int i,int j);
void display();
~Matrix()
{
delete []p;
}
};

Matrix::Matrix(int n)
{
    this->n=n;
    p = new int[n];
}

int Matrix::Dimension()
{
    return n;
}

void Matrix::set(int i,int j,int x)
{
    
}


