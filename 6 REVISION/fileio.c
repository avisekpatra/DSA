#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f1;
    char file_name[30];
    printf("Enter the file name in the format  (file_name.txt)\n");
    scanf(" %s",file_name);
    f1=fopen(file_name,"r");


    if(f1==NULL)
    {
        printf("Error opening file\n");
        return 0;
    }
 

    FILE *f2;
    char file_name2[36]="copy_";
    strcat(file_name2,file_name);  
    f2=fopen(file_name2,"w");

    char c = fgetc(f1);
    while (c!=EOF)
    {
        fputc(c,f2);
        c=fgetc(f1);
    }

    fclose(f1);
    fclose(f2);
    
    return 0;
}