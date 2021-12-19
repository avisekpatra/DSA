#include<stdio.h>

int length(char str[]) //function take the array of char ie string as input
{
    //using for loop
int i=0;
 for( ;str[i]!='\0';i++);
 return i;  //as when at i index the loop find \0 so the no of elemnt is that much because of the 0 based indexing
}

int main()
{
    char *name="avisek"; //create a string using pointer means creating an char array at heap memmory
    //also '\0' is automatically added to the array of char means this string with length 6 have is in an array of size 7 where after the string ends there is '\0' that is string terminator
    
    printf("length of the string is %d\n",length(name));
    
    return 0;
}