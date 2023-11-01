#include <bits/stdc++.h>
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
int fl(Node* node)
{
    int c=0;
    while(node->left!=NULL)
    {
        c++;
    }
    return c;
}
int fr(Node* node)
{
    int c=0;
    while(node->right!=NULL)
    {
        c++;
    }
    return c;
}
bool BalancedBT(Node* root)
{
    if (root == NULL)
    {
        return true ;
    }
    int lh = fl(root->left);
    int rh = fr(root->right);
    if (abs(lh - rh) > 1)
    {
        return false;
    }
    BalancedBT(root->left);
    BalancedBT(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    cout << BalancedBT(root);
    return 0;
}

