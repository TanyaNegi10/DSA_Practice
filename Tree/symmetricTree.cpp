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
bool check(Node* node1,Node* node2)
{
    if(node1==NULL && node2==NULL)
    {
        return (node1==node2);
    }
    else if(node1==NULL || node2==NULL)
    {
        return false;
    }
    else{
        return (node1->data==node2->data && check(node1->left,node2->right) && check(node1->right,node2->left));
    }
    
}
bool symmetric(Node* node)
{
    Node* node1=node;
    Node* node2=node;
    if(check(node1,node2))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    if(symmetric(root))
    {
        cout<<"Tree is symmetric";
    }
    else{
        cout<<"Not symmetric";
    }
    return 0;
}