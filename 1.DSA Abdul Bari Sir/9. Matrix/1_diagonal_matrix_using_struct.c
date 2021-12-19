#include<stdio.h>


struct Matrix
{
    int n; //size of the square matrix n*n
    int p[10]; //we will create an array of size 10 asuming or we can create a dynamic array or arry at heap using malloc fuction
     
};

void set(struct Matrix *m,int i,int j,int x) //as we are expecting to modify the matrix so we will mate the function call by adress
{
    if(i==j)
    {
    m->p[i-1]=x; //i-1 as we are taking a matrix with index starting from 1
    }

}

int get(struct Matrix m,int i,int j)
{
    if(i==j)
    return m.p[j-1];
    else
    return 0;
}

void display(struct Matrix matx)
{
    for(int i=0;i<matx.n;i++)
    {
        for(int j=0;j<matx.n;j++)
        {
            if(i==j)
            printf("%d ",matx.p[i-1]);
            else
            printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
 struct Matrix m = {5}; //just craeted an matric of size 5
 //to insert value rember this is a call by value as we are modifting
 set(&m,1,1,10); //remember that this is 1 index based
 set(&m,2,2,20);
 set(&m,3,3,30);
 set(&m,4,4,40);
 set(&m,5,5,50);

 //to display what value is in the indexes of the matrix
 printf("value at inde i=2 and j=2 is %d \n",get(m,2,2));

 //to print the entire array in a matrix format
 display(m);

 return 0;

}


