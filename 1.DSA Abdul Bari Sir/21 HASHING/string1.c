#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][10];
    char final[100];
    for(int i=0;i<5;i++)
    {
        printf("Enter  the string %d ",i+1);
        gets(str[i]);
        
        strcat(final,str[i]);
        if(i!=4)
        strcat(final," ");
    }

    printf("the final string is\n %s",final);
    return 0;
}