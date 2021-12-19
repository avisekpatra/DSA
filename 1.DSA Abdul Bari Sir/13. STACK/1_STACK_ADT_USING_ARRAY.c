#include<stdio.h>
#include<stdlib.h>

//first we will create a struct of stack
struct Stack
{
    int top; //this will store the index of the top most elemnt that is the last/recently added element
    int size; //to create an stack of this size ,this will use to create an array of this size
    int *s; //pointer to create an array in head for the stack
};

void push(struct Stack *st,int n)
{
    if(st->top<st->size || st->top!=st->size-1)
    {
        st->top++;
        st->s[s1->top]=n;
    }
    else
    printf("No space to push\n");
}

void pop(struct Stack *st)
{
    int x=-1;
    if(st->top!=-1)
    {
    x=st->s[st->top];
    st->s[st->top]=NULL;
    st->top--;
    }
    else
    printf("Stack underflow\n");

return x; 
}

int peek(struct Stack st,int pos)
{
if(pos>0 && pos<(st.top+1))
  return st.s[st.top-pos+1];

    return -1;
}

int isEmpty(struct Stack st)
{
    if(st.top==-1)
    return 1;
    else
    return 0;
}

int isFull(struct Stack st)
{
    if(st.top==st.size-1)
    return 1;

return 0;
}

int stackTop(struct Stack st)
{   
    if (st.top!==-1)
    return -1;
    else
    return st.s[st.top];
    
}

void Displayformtop(struct Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        printf("%d\n",st.s[i]);
    }   
}



int main()
{
struct Stack s1;
printf("enter the size of the stak\n");
scanf("%d",s1.size);
//lets create an array of this size in heap
//for this we will be using malloc fuction
s1.s= (int *)malloc(s1.size*sizeof(int));

//assign the top index now to -1 as it is empty so to idrntify we used negative value as there can never be negative index
s1.top=-1;


push(&s1,5);
push(&s1,6);
push(&s1,9);
push(&s1,7);
push(&s1,1);

Displayformtop(s1);
return 0;


}