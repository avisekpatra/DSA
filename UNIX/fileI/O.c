#include<stdio.h>

int main()
{
FILE *fp;
fp= fopen("file_1.txt","r");
if(fp==NULL)
{
    fprintf(stderr,"File does not exist ....\n");
}
char ch[30];
int age;
float mark;
fscanf(fp," %s %d %f",ch,&age,&mark);
printf("Name: %s\n",ch);
printf("Age: %d\n",age);
printf("Mark : %f\n",mark);
fclose(fp);

return 0;
}