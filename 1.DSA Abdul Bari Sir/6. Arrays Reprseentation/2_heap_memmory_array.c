#include<stdio.h>
#include<stdlib.h> //library to use malloc fuction

int main()
{
    //we use malloc function for creating a array in heap memmryy in c
    int *p = (int *)malloc(5*sizeof(int));
    //asging values to the dynamic array
    p[0]=0;
    p[1]=1;
    p[2]=2;
    p[3]=3;
    p[4]=4;
    //we can use for loop to traverse in a dynamic array
    for(int i;i<5;i++)
    {
        printf("%d\n", p[i]);
    }
    //after using the heap memmory you must delete the memmory 
    free(p); //here we use free(pointer_name)
    return 0;
}