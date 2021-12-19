#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = (int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
       p[i]=1;
    }
    //craeting a bigger heap memmory array
    int *b=(int*)malloc(10*sizeof(int));
    //coping value in p to b;
    for (int i = 0; i < 5; i++)
    {
     b[i]=p[i];
    }
    //free the haep memoory that is pointed by p
    free(p);
    //point the pointer p to b
    p=b;
    //now point the b to null;
    b=NULL;
    //wala now you have a bigger array size which is pointed by p
    //now printing the values we will not gwt array bound exception
    for(int i=0;i<10;i++)
    {
        printf("%d\n",p[i]);
    }

    //npow we are done with heap memmory so we wiill free it
    free(p);

    return 0;
    
}