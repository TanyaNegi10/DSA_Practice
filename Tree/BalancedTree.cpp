//Brute force
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
     if(node==NULL)
    {
        return 0;
    }
    int c=1;
    while(node->left!=NULL)
    {
        c++;
        node=node->left;
    }
    return c;
}
int fr(Node* node)
{
    if(node==NULL)
    {
        return 0;
    }
    int c=1;
    while(node->right!=NULL)
    {
        c++;
        node=node->right;
    }
    return c;
}
bool BalancedBT(Node* node)
{
    if (node == NULL)
    {
        return true;
    }
    int lh = fl(node->left);
    int rh = fr(node->right);
    if (abs(lh - rh) > 1)
    { 
        return false;
    }
    else{
        return BalancedBT(node->left);
        return BalancedBT(node->right);
    }
    
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    if(BalancedBT(root))
    {
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced";
    }
    return 0;
}


//Optimal Approach
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildtree(Node *root)
// {
//     cout << "Enter the data " << endl;
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     root = new Node(data);
//     cout << "Enter the data for inserting in left of " << data << endl;
//     root->left = buildtree(root->left);
//     cout << "Enter the data for inserting in right of " << data << endl;
//     root->right = buildtree(root->right);
//     return root;
// }
// int height(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int lefth=height(root->left);
//     if(lefth==-1)
//     {
//         return -1;
//     }
//     int righth=height(root->right);
//     if(righth==-1)
//     {
//         return -1;
//     }
//     if(abs(lefth-righth)>1)
//     {
//         return -1;
//     }
//     return max(lefth,righth)+1;
// }
// int main()
// {
//     Node *root = NULL;
//     root = buildtree(root);
//     if(height(root)==-1)
//     {
//         cout<<"Not balanced";
//     }
//     else{
//         cout<<"Balanced";
//     }
//     return 0;
// }

