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
void rightview(Node* root,int level,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    if(level==ans.size())
    {
        ans.push_back(root->data);
    }
    rightview(root->right,level+1,ans);
    rightview(root->left,level+1,ans);
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<int>ans;
    rightview(root,0,ans);
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }

    return 0;
}