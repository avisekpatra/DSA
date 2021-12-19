#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next; ///here we have caeted pointer variabel of type struct which will link to the next node that is have addres of the next node
    //why pointer of Node ,as it is pointing to a node so pointer of node 
    //no matter which type of pointer you create it will alway consume same memmory as int
};

//we will declare a pointer variabel of type node and assign it NULL
struct Node* head =NULL;//this is the head node which pointas to the first node in  the linked list

//function to create a new node and assign value here we will take values in an array and create an linked list of it
void create(int A[],int n)
{
    struct Node* p; //this will use to create a new node which will be assign to last at the end to goon 
    struct Node* last; //to point to the last node which we will use to add new linked list at the end

    //lets create a new node in heap 
    head = (struct Node*)malloc(sizeof(struct Node)); //this node will be creted of first so we wont tamper with the head pointer
    
    head->data= A[0]; //now the newly created node that is the first node so we will add value in the 1st elemnt in the array in the data of 1st node
    head->next=NULL; //as it is the only node created yet so it will not point any other node so assign with NULL
    last=head; //curently let point the last pointer to the heap/first node

    for(int i=1;i<n;i++) //for loop for the array
    {
        p=(struct Node*)malloc(sizeof(struct Node)); //first create another node using the p pointer  
        p->data=A[i]; //then assign teh the data at A[i] in that node->data
        p->next=NULL; //then point the next to null
        last->next=p;  //let point the last->next to p as this is the new node 
        last=p; //the assign the last pointer to the newly created node
        
    }   

}
void display(struct Node *p) //this display function will take the first node 
{
    while(p!=NULL)// check after traversing the pointer is null or not till then the loop willl go on
    {
        printf("%d ",p->data); //we will print first 
        p=p->next; //then point the poineter pointing to this node to the othere node
    }
}


int main()
{
    int A[6]={7,2,3,4,8,15};
    create(A,6);
    display(head);

    return 0;
}
