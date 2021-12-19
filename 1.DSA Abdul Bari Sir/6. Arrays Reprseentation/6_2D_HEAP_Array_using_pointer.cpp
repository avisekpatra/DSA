//craeting an 2d array in heap
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //1st craete an array of pointer this array will be store in the stack
    int *a[4];  
    //by using for loop we wiil assign ea pointer from the array of pointer to point an array in the heap memmory
    for(int i=0;i<4;i++)
    {
        a[i]=new int[5]; //assign each pointer to a heap memmory arry of size 5
    }

    //size of pointer array that is 4 is the row of the 2d array
    //size of the heap array i.e 5 is teh coloum of the 2d array
    //now we can also write like this each ements
    a[1][2]=1;
    //whre 1 is the row and 2 is the colum
    //we can use 2 nested for loop to acces the  vaules
    for(int i=0;i<4;i++) //4 that is to traverse the pointers pointing the heap array
    {
        for(int j=0;j<5;j++) //5 to travese each elemnts in the array 
        {
          a[i][j]=5; //we can assihn valies to is in the consol
        }
    }

    //we can also print it in a matrix form
  for(int i=0;i<4;i++) //4 that is to traverse the pointers pointing the heap array
    {
        for(int j=0;j<5;j++) //5 to travese each elemnts in the array 
        {
          cout<<a[i][j]<<" " ;
        }
        cout<<endl;
    }


    //important thing to remember that after using this array you must delete the heap memmory to prevent from mrmmory leak
    
for(int i=0;i<4;i++)
{
    delete []a[i];
}
    return 0;
}