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
bool BalancedBT(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    int lh = BalancedBT(root->left);
    int rh = BalancedBT(root->right);
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