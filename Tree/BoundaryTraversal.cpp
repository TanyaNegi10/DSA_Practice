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

bool isLeaf(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }else{
        return false;
    }
}

void addleft(Node* root,vector<int>&ans)
{
    Node* temp=root->left;
    while (temp)
    {
        if(!isLeaf(temp))
        {
            ans.push_back(temp->data);
        }
        if(temp->left!=NULL)
        {
            temp=temp->left;
        }else{
            temp=temp->right;
        }
    }   
}

void addleaf(Node* root,vector<int>&ans)
{
    if(isLeaf(root))
    {
        ans.push_back(root->data);
    }
    if(root->left!=NULL)
    {
        addleaf(root->left,ans);
    }
    if(root->right!=NULL)
    {
        addleaf(root->right,ans);
    }

}

void addright(Node* root,vector<int>&ans)
{
    Node* temp=root->right;
    vector<int>arr;
    while(temp)
    {
        if(!isLeaf(temp))
        {
            arr.push_back(temp->data);
        }
        if(temp->right!=NULL)
        {
            temp=temp->right;
        }else{
            temp=temp->left;
        }
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        ans.push_back(arr[i]);
    }
}

vector<int> boundaryTrav(Node* root)
{
    vector<int>ans;
    if(!isLeaf(root))
    {
        ans.push_back(root->data);
    }
    addleft(root,ans);
    addleaf(root,ans);
    addright(root,ans);
    return ans;
}

int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<int>boundary=boundaryTrav(root);
    for(auto ele:boundary)
    {
        cout<<ele<<" ";
    }
    return 0;
}