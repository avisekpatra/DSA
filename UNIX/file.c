#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f1;
    FILE *f2;
    
    f1=fopen("file_1.txt","r");
    f2=fopen("file_2.txt","w");
    int pos=5;
    //storing the length of the length of f1
    fseek(f1,0,SEEK_END);
    int l=ftell(f1);
     
    //moving he f1 pointer to the beginng
    fseek(f1,0,0);
     
    char str[]=" Avisek";
    char ch;
    int i=0;

    
    while(i<pos)
    {
    fscanf(f1," %c",&ch);
	fprintf(f2,"%c",ch);
    i++;
    }

    fprintf(f2,"%s",str);
    
    int out=fscanf(f1,"%c",&ch);
    while (out==1)
    {
        fprintf(f2,"%c",ch);
        out=fscanf(f1,"%c",&ch);

    }
    

  
    fclose(f1);
    fclose(f2);
    return 0;
    
}



