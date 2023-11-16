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
vector<int>postorder(Node* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
    stack<Node*>st1,st2;
    st1.push(root);
    while(!st1.empty())
    {
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL)
        {
            st1.push(root->left);
        }
        if(root->right!=NULL)
        {
            st1.push(root->right);
        }
    }
    while(!st2.empty())
    {
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<int>postorderTrav=postorder(root);
    for(auto ele:postorderTrav)
    {
        cout<<ele<<" ";
    }
    return 0;
}