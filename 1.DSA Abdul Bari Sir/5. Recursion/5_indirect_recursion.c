#include<stdio.h>

void funB(int n);  //we must atleast declare the function without body before using in a function that is wriiten after that fuction

void funA(int n)
{
    if(n>0)
    {  
    funB(n-1);
    printf("%d ",n);
    }
}

void funB(int n)
{
    if(n>1)
    {  
    funA(n/2);
    printf("%d ",n);
    }
}

int main()
{
    funA(20);
    return 0;

}