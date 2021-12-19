#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

//insert function
struct Node* insert(struct Node* node,int key)
{
    struct Node* t;

if(node==NULL)
{
    t= new Node(key);
    return t;
}

if(key<node->data)
node->left=insert(node->left,key);
else if(key>node->data)
node->right=insert(node->right,key);

return node;

}
//inorder traversal printing
void inorder(struct Node* node)
{
    if(node==NULL)
    return ;}
    else
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

//------------FUNCTION FOR DELETE--------------//

//we need a function to count the height
int height(struct Node* node)
{
    int left_height;
    int right_height;

    if(node==NULL)
    return 0;

    left_height=height(node->left);
    right_height=height(node->right);

    if(left_height > right_height)
    return left_height + 1;
    else
    return right_height + 1;

}

//INORDER PREDESESOR if we write the elemnt in inorder manner that is sorted then the no we will delete the number before that numbet is inorder predesasor
//then the no we will delete the number before that numbet is inorder predesasor
struct Node* inorderPredesessor(struct Node* node)
{
    while(node!=NULL && node->right!=NULL)  //move to the right most elemnt of this left subtree and the end node is that whose node-> right os null
    {
        node=node->right;
    }
    return node;
}

//INORDER SUCSESOOR the data we want to delete a partivular elemenet the elemnt next to that elemnt is the inorder sucsessor
//only for right subtree
//here in the right subtree we will go to the left most node and return it
struct Node* inorderSucsessor(struct Node* node)
{
    while (node!=NULL && node->left!=NULL)
    {  
        node=node->left;
    }

    return node;   
}


//DELETE FUNCTION

//as we will be using a recursive function for deletion we heve to return 
struct Node* delete_node(struct Node* node,int key)
{
struct Node*q; //for replacing

//if the node dont have any elemnt then just return NULL
if(node==NULL)
return NULL;

//if it is a leaf node then delete it and as we have deleted it return NULL
//remeber the leaf node is the only node we will actuall delete from thr heap memmory 
//other nodes the value will be repleaced
if(node->data==key && node->left==NULL && node->right==NULL)
{
    delete node;
    return NULL;
}


//we want to delete a element which is smaller than the current node then we go to the left subtree/node using this delete function
if(key<node->data)
node->left=delete_node(node->left,key);  //as we will be delteing and replacing the delted node place with the inorder predesasor or inorder succesor


//if the key is greter then the current node->data then go to the left subtreee and search for thr key element
else if(key>node->data)
node->right=delete_node(node->right,key); 


//if we found the key in a node then we will find the inorder predesesor or inorder succesor replace the delete node data with it then actuall we will delete the inorder predesesor or inorder succesor node and also we will find there inorder predesesor or inorder succesor so that the tree is maintained
else if(key==node->data)
{
    //we can either use the inorder predesasor or in inorder succesor as a replacement
    //but we will chose based on the height
    //which side length is larger from tha side we will be modifying 
    //if we delete it from the largest height we overally reducing the height of the bst
    if(height(node->left)>height(node->right))
    { 
         //that is the left subtree is height is bigger
         //then we take the inorder predesasor cause it is present in the left subtree's right most node
        //we will take the inorder predesasor node to anather node
        q=inorderPredesessor(node->left); //pass the left node
        //replace the deleteting node with the inorder predesesor
        node->data=q->data;
        //then delete recursively as the node we will delete will also get replaved by it inorder predesasors
        //so now we will do the same for thr q->data
        node->left=delete_node(node->left,q->data);
   
    }
    else  //that is right subtree height is larger or equal  so we will find the inorder sucessor
    {
      q=inorderSucsessor(node->right);
      node->data=q->data;
      node->right=delete_node(node->right,q->data);
    }
}


//after that return the node
return node;

}


//---------------------------------------------//

int main()
{
 struct Node* root=NULL;
 root=insert(root,7);
 root=insert(root,8);

 
 
 root=delete_node(root,5);


 inorder(root);

    return 0;

}