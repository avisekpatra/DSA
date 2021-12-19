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
    M = new int[n*(n+1)/2]; //craeting an array of size n*(n+1)/2 as this much elemnt are there 
     
}

void Matrix::set(int i,int j,int x)
{ 
    //for lower traingel the condition is i>=j
    if(i>=j && i<=n && j<=n)   //rememnber we are representating the matrix in 01based indexing that is the minimum index i=1 and j=1
    {
    M[((i * (i - 1)/2 + j)) - 1]=x; //now we are using row major maping so the formula is M[(i * (i - 1)/2 + j) - 1] is the index where we will store 
    }
}

int Matrix::get(int i,int j)
{
    if(i>=j && i<=n && j<=n)  //rememnber we are representating the matrix in 01based indexing that is the minimum index i=1 and j=1
    {
        return M[((i * (i - 1))/2 + j) - 1]; //as we are using row major maping so we will use i based formula here
    }
    return 0;
}
//here we will represent the array M[n] in a 2D matrix format
void Matrix::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            cout<<M[(i*(i-1))/2+j-1]<<" "; //see how we have represented a 1d array in a 2d matrix output
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
    Matrix lowertraingel(5);
    //now insert 5 elemnts remember it is a zero based indexing matrix
    lowertraingel.set(1,1,1);
    lowertraingel.set(2,1,2);
    lowertraingel.set(2,2,3);
    lowertraingel.set(3,1,4);
    lowertraingel.set(3,2,5);
    lowertraingel.set(3,3,6);
    lowertraingel.set(4,1,7);
    lowertraingel.set(4,2,8);
    lowertraingel.set(4,3,9);
    lowertraingel.set(4,4,10);
    lowertraingel.set(5,1,11);
    lowertraingel.set(5,2,12);
    lowertraingel.set(5,3,13);
    lowertraingel.set(5,4,14);
    lowertraingel.set(5,5,15);  //or we can use a for loop
    
    //now we want to get what elemnt is present in index i=3 j=3
    cout<<"elemnts in index i=3 and j=3 is "<<lowertraingel.get(3,3)<<endl;

    //now display the whole matrix 
    lowertraingel.display();
    return 0;

}