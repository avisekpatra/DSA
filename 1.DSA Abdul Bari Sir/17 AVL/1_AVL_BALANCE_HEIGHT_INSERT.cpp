#include<bits/stdc++.h>
using namespace std;

//------------------------Node---------------------//

//a linked representaion for binary tree no need to explian
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node (int data)
    {
       this->data=data;
       left=NULL;
       right=NULL;
    }
};

//-------------------------AVL_TREE----------------------//

//a class for AVL_TREE
class AVL_TREE
{
    public:
    struct Node* root; //this is we have to make public so that we can acsse it it
    AVL_TREE() // a constructor which initialise the root node as NULL initially
    {
        root=NULL;
    }
   
    //then we have fuction for AVL TREE like insertion and deltion but this is the basic struct 
    //insert fuction to insert elemnt in the tree and also automatically get balanced
    struct Node* insert(struct Node*node,int key);
    
 
};

//--------------------height---------------------------//

//fuction to return the height of a tree or subtree when node is passed 
//used for the insert fuction for finging the balance factor
int height(struct Node* node)
{
    if(node==NULL)  //if the node is null remeber to return -1 
    return -1;
    int lh=height(node->left);
    int rh=height(node->right);

    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}

//---------------------balanceFactor---------------------//

//function to find the balnce factor for a node
//balance factor= height of left subtree - height of right subtree
int balanceFactor(struct Node* p)
{
if(p==NULL) //if the node passed is NULL then return -1 for it not 0
return -1;
else  //if not then by using the height function we will find the differnce between the left subtree and right subtree and return it
return height(p->left)-height(p->right);
}

//----------------------rightRotate---------------------//

//in AVL we perform rotae to achice balance height of the binary tree
//so this is rightRotae fuvtion which will rotate in clockwise 
//generally called by left-left case or left-right or right-left cases
//to understand it please darw and analyse how we have achieve it
struct Node* rightRotate(struct Node* node)
{
    struct Node* x=node->left;
    struct Node* y=x->right;

    x->right=node;
    node->left=y;
    return x;
}

//-------------------leftRotate---------------------//

//to rotate left direction that is anti clockwise
//right-right case or 
//left - right or right- left case we call this
//again to understand it plaese refer to the diagram and do it your self
struct Node* leftRotate(struct Node* node)
{
    struct Node* x= node->right;
    struct Node* y=x->left;

    x->left=node;
    node->right=y;
    return x;
}

//-------------------insert---------------------//

//insert function
struct Node* AVL_TREE::insert(struct Node* node,int key)
{
//first we will perform serach and insert the elment then we  will check if balance or not if not then only we will balnce it
if(node==NULL)  //if the node is NULL that is empty then fill it with the node of data key and return 
{
    struct Node* t;
    t=new Node(key);
    node=t;
    return node;
}

if(key<node->data) //if some elment is there then checking will it get inserted in left subtree
node->left=insert(node->left,key);

else if(key>node->data) //or get insert in right subtree if the key value is greater than the value of the curent node data
node->right=insert(node->right,key);

else   //if we found that the user want to insert key which is alredy there then just return the node 
{
    cout<<key<<" Already Exist\n";
    return node;
}
//now after sorting we will find the balance factor of the node 
//and check condition by condition if it is not balance then which kind of imbalance is it

//storing the balance factor in a int variable
int bf = balanceFactor(node);

//for more understanding plaese draw and find how we are using this
//left-left case ,,eans we have to rotate to right
if(bf>1 &&  key < node->left->data)
return rightRotate(node);

//right-right case,means we have to rotate to left
if(bf<-1 && key > node->right->data)
return leftRotate(node);

//left-right case 
if(bf>1 && key >node->right->data)
{
    node->left=leftRotate(node->left);  //first we will permform a left rotation for the node->left elemnt
    return rightRotate(node); //then after getting the result on leftrotate to the node->left 
                              //we will return the rigth rotaion of the node
                              // //we have to return it as it a recursive fuction so there must be a large brancch and all
}                 
//right-left case
if(bf<-1 && key< node->right->data)
{
    node->right=rightRotate(node->right);//first right rotate of the node->right elment
    return leftRotate(node); //then after geting the result rotate the node to left and return it 
                             //we have to return it as it a recursive fuction so there must be a large brancch and all
}

return node;  //after doing everything just return the fucking node

}

//----------------------inorder--------------------------//

//inorder traversal output as in BST it gave the sorted output
void inorder(struct Node* node)
{
    if(node==NULL)
    return ;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

//-----------------------main----------------------//

int main()
{
    AVL_TREE a;
    int A[7]={10,20,30,40,50,60,70};
    
    for(int i=0;i<7;i++)
    {
        a.root=a.insert(a.root,A[i]);
    }

    cout<<"height "<<height(a.root)<<endl;
    
   
    inorder(a.root);
    return 0;
}