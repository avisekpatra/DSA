#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

//craete a pointer of Node type to point the 1st node of the linked list
struct Node *head = NULL;


void create (int A[],int n)
{
    struct Node *p;
    struct Node *last;

    head = new Node;
    head->data =A[0];
    head->next=NULL;

    last = head;

    for(int i=1;i<n;i++)
    {
        p =new Node;
        p->data=A[i];
        p->next=NULL;

        last->next=p;
        last=p;
    }
}

int max(struct Node *p)
{
    int max= INT_MIN;

   while(p!=NULL)
   {
       if(p->data>max)
       {
           max=p->data;
           p=p->next;
       }
       else
       p=p->next;
       
   }
  return max;
}



int min(struct Node *p)
{
    int m = INT_MAX;

while(p!=NULL)
{
    if(p->data < m)
    {
    m = p->data;
    p=p->next;
    }
    else
    p=p->next;
}
return m;
}


int main()
{
    int A[]={5,44,76,89,99};
    create(A,5);
    cout<<"the Max elemnt is "<<max(head)<<endl;
    cout<<"the min elemnt is "<<min(head)<<endl;
    return 0;
}