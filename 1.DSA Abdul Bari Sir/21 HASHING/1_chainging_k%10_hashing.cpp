//hashtable with hash function key mod 10
#include<iostream>
using namespace std;

//as we are using chaining method for colision so we will be using linked list
//----------------Node---------------//
struct Node
{
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

//--------------LinkedList class----------------//
class LinkedList
{
    public:
    struct Node* head;
    LinkedList()
    {
        head=NULL;
    }
//--------------insert function for Linked List----------------//
    void insert(int key)
    {
       struct Node *t=new Node(key);

       if(head==NULL)
       {
           head=t;
       }
       else
       {
          t->next=head;
          head=t;
       }
    }
//-------------------search function to search a particular key----------------------//
    bool search(int key)
    {
        struct Node* p=head;
        while (p)
        {
            if(p->data==key)
            return true;
        p=p->next;
        }
        
        return false;     
    }

//---------------------delete a particular key in the linked list and delete it and return the delted element---------------------//
    int deleteInLinkedlist(int key)
    {
        
        if(search(key))
        { 
        struct Node*p=head;
        struct Node*q=NULL;
        int x;

        if(head->data==key)
        {
            x=head->data;
            head=head->next;
            delete p;
            return x;
        }

        while (p)
        {
            if(key==p->data)
            {
                x=p->data;
                q->next=p->next;
                delete p;
                return x;
            }
            q=p;
            p=p->next;
        }
        }
        return -1;
        
    }
//-------------------to display all elemnts in the linked list------------------//
    void display()
    {
        if(head!=NULL)
        {
        struct Node* p= head;
        while (p!=NULL)
        {
           cout<<p->data<<" ";
           p=p->next; 
        }
        }  
    }

};

//this is  k mod n function
//-----------------------Hash table class-----------------//
class HashTable
{
    public:
    //we will craete an array of linked list of size 10
    //size 10 cause we want index of the array from 0 to 9 for hash function k mod 10 
    LinkedList l[10];
//----------------------hash function of Key mod 10(based on the unit digit)----------------//
int hashFunction(int key)
{
    return key%10; //this function return the index where the key wil be inserted
}
//----------------insert function for hash table-----------------//
    void insertinhash(int key)
    {
        int i=hashFunction(key); //1st we will get the index
        l[i].insert(key); //then insert in the right index linkedlist
    }
//----------------search function for hash table-----------------//
    bool searchinhash(int key)
    {
        int i=hashFunction(key);
        return l[i].search(key);  //if found then return true
    }
//delete a particular key from the hash table-------------------//
    int deleteInHash(int key)
    {
      int i=hashFunction(key);
      return l[i].deleteInLinkedlist(key); //for that index we will delete that key
    }
//function to display all elemnts in a particular index in thee arary of the linked list
    void displayInAparticularIndex(int i)
    {
        l[i].display();
    }

};


int main()
{
    //k mod 10
    int A[]={10,16,24,20,50,30};
    int n= sizeof(A)/sizeof(A[0]);
    
    HashTable h;
    for(int i=0;i<n;i++)
    {
    h.insertinhash(A[i]);
    }

    if(h.searchinhash(21))
    cout<<"yes it is there \n";
    else
    cout<<"no it is not there\n";

    int x=h.deleteInHash(24);
    if(x==-1)
    cout<<"element is not there to delete\n";
    else
    cout<<x<<" is deleted\n";
    
    h.displayInAparticularIndex(0);
    
        
    return 0;
}