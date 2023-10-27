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
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter the data for inserting in the left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for inserting in the right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void preorderTraversal(Node* root)
{
    vector<int>preorder;
    if(root==NULL)
    {
        return ;
    }
    stack<Node*>st;
    st.push(root);
    while (!st.empty())
    {
        root=st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right!=NULL)
        {
            st.push(root->right);
        }
        if(root->left!=NULL)
        {
            st.push(root->left);
        }
    }
    for(auto ele:preorder)
    {
        cout<<ele<<" ";
    }
    
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    preorderTraversal(root);    
    return 0;
}