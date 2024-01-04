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
bool sametree(Node *root1, Node *root2)
{
    if (root1 == NULL || root2 == NULL)
    {
        return (root1==root2);
    }
    return (root1->data==root2->data) && sametree(root1->left,root2->left) && sametree(root1->right,root2->right);
}
int main()
{
    Node *root1 = NULL;
    root1 = buildtree(root1);
    Node *root2 = NULL;
    root2 = buildtree(root2);
    if(sametree(root1,root2))
    {
        cout<<"Identical";
    }
    else{
        cout<<"Not identical";
    }

    return 0;
}