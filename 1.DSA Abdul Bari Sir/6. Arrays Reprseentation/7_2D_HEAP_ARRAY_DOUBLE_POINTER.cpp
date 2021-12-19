//using doubel pointer then every thisng will be in  heap 
//the array which whill store the heap meemmory array will be in heap too
#include<bits/stdc++.h>
using namespace std;

int main()
{
//creating a double pointer
int **p;

//assing a heap array of pointer to this double pointer
p= new int*[4]; //syntax for assinging heap array of pointer to a double pointer

//now assigning heap memmory array to each pointers in the array of doble pointer which is also created in heap
for(int i=0;i<4;i++)
{
    p[i]= new int[5];
}

//now we have created 2d array using double pointer and let assing each elment with 6
for(int i=0;i<4;i++) //4 as row 
{
    for(int j=0;j<5;j++)//5 as col
    {
        p[i][j]=6;
    }
}
for(int i=0;i<4;i++) //4 as row 
{
    for(int j=0;j<5;j++)//5 as col
    {
      cout<<p[i][j]<<" ";
    }
    cout<<endl;
}

//and also remember to delete this array and all as it is created in heap


    return 0;
}