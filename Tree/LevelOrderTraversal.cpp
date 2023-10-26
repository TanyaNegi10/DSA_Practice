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
vector<vector<int>>levelorder(Node *root)
{
    vector<vector<int>>ans;
    if(root==NULL)
    {
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int s=q.size();
        vector<int>level;
        for(int i=0;i<s;i++)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;

}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<vector<int>>order=levelorder(root);
    for(auto i:order)
    {
        for(int j=0;j<i.size();j++)
        {
            cout<<i[j]<<" ";
        }
    }

    return 0;
}