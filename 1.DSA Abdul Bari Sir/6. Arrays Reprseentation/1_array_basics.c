#include<stdio.h>

int main()
{
    int a[] = {0,1,2,3,4,5,6}; //we can declar3e array with an empty square where the size is missing ,well the size will get filled by the no of elemnt in it
    printf("\n%d\n",sizeof(a)/sizeof(int)); //checking the no  of elemnts using sizeof and tehn divide it with the size of type that is int and in this compiler it is 4
    
    //we can acsess the elemnts 
    //using index no
    printf("elemnt in index 6 is %d\n",a[6]);
    //we can also write like index outside and array name inside like index[array_name]
    printf("elemnt in idex 4 is %d\n",4[a]);
    //we can also use pointer 
    //Syntax *(array_name + index)
    printf("elemnt in index 2 using pointer is %d\n",*(a+2));
  
    //to traverse through the elemnts in a array
    for(int i=0;i<sizeof(a)/sizeof(int);i++)   //sizeof(a)/sizeof(int) = no of elments in the array 
    {
        printf("%d\n",a[i]);
    }
    return 0;
}