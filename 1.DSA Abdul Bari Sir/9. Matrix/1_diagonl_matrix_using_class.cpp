#include<bits/stdc++.h>
using namespace std;

class Matrix //creating a class for matrix
{
    private:
    
    int *M; //it is the 1D array where we we impliment our 2D matrix array and it will be created in heap so pointer is used
    int n; //this is the size of the matrix,as it is a square matrix so n*n matrix and also we will create an array of size that 
    
    public:
    
    //constructor
    Matrix(int n);
    
    //facilators
    
    //set function to add new elemnt in the matrix which is implimented using array
    void set(int i,int j,int x); //we will take only index as input
    
    //get function to get the value at a perticular indexs in the matrix
    int get(int i,int j);
    
    //a display function to display the diagonal function in a matrix output
    void display();
    
    //destructor
    ~Matrix();//this will delete the heap memmory created
};

Matrix::Matrix(int n)
{
    this->n=n; //this will take a user what is the size of the square matrix they want to create 
    M = new int[n]; //craeting an array of size n on the craetion of the object of Matrix
     
}

void Matrix::set(int i,int j,int x)
{
    if(i==j && i<n && j<n)   //rememnber we are representating the matrix in 0 based indexing that is the minimum index i=0 and j=0
    {
    M[i]=x; //we can also write M[j]=x as i==j so we just have strored it 
    }
}

int Matrix::get(int i,int j)
{
    if(i==j && i<n && j<n)  //remember we are taking a matrix of 0 based indexing
    {
        return M[j]; //we can also write Return M[i]
    }
}
//here we will represent the array M[n] in a 2D matrix format
void Matrix::display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            cout<<M[i]<<" "; //see how we have represented a 1d array in a 2d matrix output
            else
            cout<<"0 ";
        }
        cout<<endl;
    }

}

Matrix::~Matrix()
{
    delete M; //delete the memmory created in the heap
}

int main()
{
    Matrix diagonal(5);
    //now insert 5 elemnts remember it is a zero based indexing matrix
    diagonal.set(0,0,1);
    diagonal.set(1,1,2);
    diagonal.set(2,2,3);
    diagonal.set(3,3,4);
    diagonal.set(4,4,5);
    
    //now we want to get what elemnt is present in index i=3 j=3
    cout<<"elemnts in index i=3 and j=3 is "<<diagonal.get(3,3)<<endl;

    //now display the whole matrix 
    diagonal.display();
    return 0;

}