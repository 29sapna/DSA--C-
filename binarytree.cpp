#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int value)
    {
        int data=value;
        left=right=NULL;
    }
};
void PreOrder(Node *root)
{
    if(root ==NULL)
    return;

    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node *root)
{
    if(root ==NULL)
    return;
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}
void postOrder(Node *root)
{
    if(root ==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
}
Node * BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<" :";
    temp->right=BinaryTree();
    return temp;
}
int main()
{
    cout<<"Enter the root Node: ";
    Node *root;
    root=BinaryTree();
    cout<<"PreOrder: ";
    PreOrder(root);

    cout<<"\nInorder: ";
    InOrder(root);

    cout<<"\npostOrder: ";
    postOrder(root);


}