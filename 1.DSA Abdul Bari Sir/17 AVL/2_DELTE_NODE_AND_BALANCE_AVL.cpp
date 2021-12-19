#include<iostream>
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

class AVL_TREE
{
    public:
    struct Node* root;
    AVL_TREE()
    {
        root=NULL;
    }

    struct Node*insert(struct Node*node,int key);
    struct Node*deleteNode(struct Node*node,int key);

};
//-----------------height-----------------//
int height(struct Node*node)
{
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}

//--------------balance Factor---------------//
int balanceFactor(struct Node* node)
{
    if(node==NULL)
    return -1;
    else
    return height(node->left)-height(node->right);
}
//-------------------rotate Right------------------//
struct Node* rotateRigth(struct Node*node)
{
    struct Node* x= node->left;
    struct Node* y=x->right;

    x->right=node;
    node->left=y;

    return x;
}

//--------------------rotate Left--------------------//
struct Node* rotateLeft(struct Node*node)
{
    struct Node* x= node->right;
    struct Node* y= x->left;

    x->right=node;
    node->left=y;

    return x;
}


//-------------Insert Node and blance the tree----------------//
struct Node*AVL_TREE::insert(struct Node*node,int key)
{
    if(node==NULL)
    {
        struct Node* t= new Node(key);
        node=t;
        return node;    
    }
    //1st search and insert the elemnt
    if(key < node->data)
    node->left=insert(node->left,key);
    else if(key>node->data)
    node->right=insert(node->right,key);
    else
    {
        cout<<"Already Exixts\n";
        return node;
    }

    int bf= balanceFactor(node);
    //left left imbalance
    if(bf>1 && key<node->left->data)
    return rotateRigth(node);    //just rotae right
    //left right impbalance
    else if(bf>1 && key>node->left->data)
    {
    node->left=rotateLeft(node->left);  //first left riate the node->left 
    return rotateRigth(node); //then right rotate the node  that the whole tree
    }
    //right right imbalance
    else if(bf<-1 && key>node->right->data)
    return rotateLeft(node);
    //right left imbalance
    else if(bf<-1 && key < node->right->data)
    {
        node->right=rotateRigth(node->right);
        return rotateLeft(node);
    }

    

return node;
}
//-------------inorder Predeseor--------------//
struct Node* inorderPredesesor(struct Node*node)
{
    struct Node* p= node;
    while (p!=NULL && p->right!=NULL)
    {
       p=p->right;
    }

    return p;    
}

//----------------inorder SUcessor-------------------//
struct Node* inorderSucessor(struct Node*node)
{
    struct Node* p= node;
    while(p!=NULL && p->right!=NULL)
    {
        p=p->left;
    }
    return p;
}


//-------------------------DELTETE NODE AND THEN BALANCE THE TREE CREATING A A AVL TREE---------------------------------/


//basic aproach is first search for the element
//if found then chack for which kind of node that is leaf node,node with one child and node with both child then delete acordingly
//then check for the balance factor is balanced or imbalance 
//based on the 6 imbalance condition rotate the tree and make it balamce
struct Node*AVL_TREE::deleteNode(struct Node* node,int key)
{
    //we will check if the node is NULL or not
    if(node==NULL)
        return node; //just return how node came that is same as returning node
    
    //now seraching then deleteing
    if(key<node->data)
    node->left=deleteNode(node->left,key);
    
    else if(key>node->data)
    node->right=deleteNode(node->right,key);

    //that is we found the key we want to delete now
    else if(key==node->data) 
    {
      struct Node* temp; //after deleteing a particular node it must have other subtree to conect the other subtrree 
      //here we have 3 sinario
      //case 1 that is for deleting leaf node and deleting node with one child
      if(node->right==NULL) //if the node->right is null then it can be leaf node or node with one child in both case we will do the same
      {
          temp=node->left; //if right is null save the node left to the temp 
          delete node; //delete the node from the heap
          return temp; //then return the temp 

      }
      else if(node->left==NULL)
      {
          temp=node->right;
          delete node;
          return temp;
      }
      //case 2 that is deleteing the node with both the child
      //we will compare that node height whose height is bigger based on that we will chose which value will replace the delete key if the left subtree height is gretaer then the inorder pRedesessor and for right its inorder sucessor and if equal any on eof them  
      else if(node->left!=NULL && node->right!=NULL) 
      {
          struct Node*q;
          //comparing the height
          if(height(node->left)>height(node->right))
          {
           q=inorderPredesesor(node->left);
           node->data=q->data;
           node->left= deleteNode(node->left,q->data);
          }
          else
          {
              q=inorderSucessor(node->right);
              node->data=q->data;
              node->right=deleteNode(node->right,q->data);

          }
      }
    }

    //now we find the balance factor and compare and check for all 3 types of imbalance cause due to delteing a node
    int bf= balanceFactor(node);
    
    //case in which we will perfor right rotate
    //left left imbalance
    if(bf==2 && balanceFactor(node->left)>=0)
    {
        return rotateRigth(node);
    }
    //case when we will perform the operation
    //right right imbalandce
    else if(bf==-2 && balanceFactor(node->right)<0)
    {
        return rotateLeft(node);
    }
    //left Right imbalance
    else if(bf==2 && balanceFactor(node->left)==-1)
    {
        node->left=rotateLeft(node->left);
        return rotateRigth(node);
    }
    //right left Imbalance
    else if(bf==-2 && balanceFactor(node->right))
    {
        node->right= rotateRigth(node->right);
        return rotateLeft(node);
    }

    return node;
}

//----------------inorder Traversal print-----------------//
    void inorder(struct Node*node)
    {
        if(node==NULL)
        return ;
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }

int main()
{
AVL_TREE t;
t.root= t.insert(t.root,12);
t.root= t.insert(t.root,1);
t.root= t.insert(t.root,21);
t.root= t.insert(t.root,18);
t.root= t.insert(t.root,27);
t.root=t.deleteNode(t.root,18);
inorder(t.root);
cout<<"\nheight "<<height(t.root)<<endl;
return 0;
}