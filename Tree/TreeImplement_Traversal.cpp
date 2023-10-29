#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
        
    }
};
Node* buildtree(Node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter the data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void preorder(Node* node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
void postorder(Node* node)
{
    if(node==NULL)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
void inorder(Node* node)
{
    if(node==NULL)
    {
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
//Time complexity of all traversal is O(N)
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    cout<<"Preorder Traversal of a tree"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal of a tree"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Inorder Traversal of a tree"<<endl;
    inorder(root);
    return 0;
}
