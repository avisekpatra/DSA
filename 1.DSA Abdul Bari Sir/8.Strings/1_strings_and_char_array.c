#include<stdio.h>

int main()
{
    char name[30]="avisek patra";
    char str[]={'a','b','c','\0'}; //must include this \0 at the end of a string while storing in this format
    

    //to print
    printf("%s\n",name);  //for string s is used
    
    char c[10];
    //to taking a word input that is only 1st word of the string is printed
    scanf("%s",c);
    //to print
    printf("%s\n",c);

    //to take a line as input we use gets(char_array_name) function
    char demo[10];
    gets(demo);
    printf("%s\n",demo);
    
    
    return 0;


}