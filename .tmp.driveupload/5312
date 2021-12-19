#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

//create function to take array and convert it to a linked list

//fuction to check is a lisnked list is sorted or not
bool isSorted()
{
    struct Node *p=head; //pointer to traverse
    int x = INT_MIN;  //variabel to compare with p->data 

    while(p!=NULL)
    {
        if(p->data>x)
        {
        x=p->data; //update the value of x 
        p=p->data; //then move the pointer to the next node
        }
        else
        return false; //if any elemnt is is less than x then it is not sorted so return false
    }

    //after the while loop is completely exicuted and then come to this stateent means the list is sorted so return true
    return true;
}