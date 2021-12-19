#include<stdio.h>
#include<stdlib.h> //to use malloc fuctio

//create a struct of Array ,im Struct every thing inside it are in public by default where in class it is private in default 
struct Array
{
int *Arr;
int size;
int length;
};

void Display(struct Array obj)
{
for(int i=0;i<obj.length;i++) //here the length is the length in the structure og Arary thats why we are updating it constantly
{
 printf("%d ",obj.Arr[i]);
}
   
}


int main()
{
    struct Array a;

    printf("enter the size of the array\n");
    scanf("%d", &a.size); //we have to pass the addres so that any changes inthis will also affect 

    //creating an array of size in heap memmory
    a.Arr= (int*)malloc(a.size*sizeof(int));

    a.length=0; //as no elements are there ,we have to update the length each time any insertion or deletion of elemnt in teh array happen so that we can use length to know no of elemnts present in that array

    int num;
    printf("enter the no of elemnts you want to add\n");
    scanf("%i",&num); //each time scanf means &name
    
    printf("enter elemnts in the array\n")
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a.Arr[i]);
    }
    //now the array is filled with n elemnts so assign length to n
    a.length=num;

    //call the display function
    Display(a);

    //after everyhting is over we will just free the heap memmory created
    free(a.Arr);


    return 0;
}