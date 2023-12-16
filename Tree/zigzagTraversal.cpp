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
vector<vector<int>>zigzagLevelorder(Node* root)
{
    vector<vector<int>>ans;
    if(root==NULL)
    {
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    bool ltr=true;
    while(!q.empty())
    {
        int size =q.size();
        vector<int>v(size);
        for(int i=0;i<size;i++)
        {
            Node* node=q.front();
            q.pop();
            int index=(ltr)?i:(size-1-i);
            v[index]=node->data;
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
        }
        ltr=!ltr;
        ans.push_back(v);
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    vector<vector<int>>ans=zigzagLevelorder(root);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}