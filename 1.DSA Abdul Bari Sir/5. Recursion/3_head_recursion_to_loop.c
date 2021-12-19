#include<stdio.h>

//using head recursion
void headfun(int n)
{
if(n>0)
{
    headfun(n-1);
    printf("%d \n",n);
}
}
//it is not easy and direct way to convert a head recursion into a loop we have to use anoyher variabel i like
void fun(int n)
{
    int i=0;
    while(i<n)
    {  i++;
        printf("%d \n",i);
    }
}

int main()
{
    printf("using recursive functiom\n");
    headfun(5);
    printf("\n using loop \n");
  fun(5);
    return 0;
}