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
void inorder(Node* root,vector<int>&v)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root -> left,v);
    v.push_back(root->data);
    inorder(root -> right,v);
    
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<int>ans;
    inorder(root,ans);
    bool BST=true;
    for(int i=1;i<ans.size();i++)
    {
        if(ans[i-1]>ans[i])
        {
            BST=false;
        }
    }
    if(BST)
    {
        cout<<"BST"<<endl;
    }
    else{
        cout<<"Not BST"<<endl;
    }
    return 0;
}
