#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildtree(Node *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
vector<int>bottomView(Node* root)
{
    map<int,int>mp;
    queue<pair<Node* ,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        Node* node=p.first;
        int line=p.second;
        mp[line]=node->data;
        if(node->left!=NULL)
        {
            q.push({node->left,line-1});
        }
        if(node->right!=NULL)
        {
            q.push({node->right,line+1});
        }
    }
    vector<int>ans;
    for(auto k:mp)
    {
        ans.push_back(k.second);
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    vector<int>v=bottomView(root);
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    return 0;
}