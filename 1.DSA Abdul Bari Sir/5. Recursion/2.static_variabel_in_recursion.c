#include<stdio.h>

int fun(int n)
{
    static int x=0; //value of satic variabel dont get created and initialise every time the function is called
                      //eevry time the fuction call it will be using the same static variabel and values
    if(n>0)
    {
        x++;
        return fun(n-1)+x;  //rember that the value of x will be added after the function is soved and remeber that 
                             //static variabel dont get created and initialise with 0 again on calling  the fuction again on fuction call 
    }
    return 0;
}

int main()
{
    printf("\n%d\n",fun(5));

    return 0;
}