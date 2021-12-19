#include<stdio.h>

int fun(int n)
{
    if(n>100)
    return n-10;
    else
    return fun(fun(n+11)); //caling the same fuction inside as a parameter 
}
int main()
{
    printf("\n%d\n",fun(95));
    return 0;
}