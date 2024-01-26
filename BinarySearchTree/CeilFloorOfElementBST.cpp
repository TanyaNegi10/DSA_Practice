#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
Node* buildTree(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(data > root -> data)
    {
        root -> right = buildTree(root -> right,data);
    }else{
        root -> left = buildTree(root -> left,data);
    }

    return root;
}

void Input(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = buildTree(root,data);
        cin >> data;
    }
}
int FindCeil(Node*root,int ele)
{
    int ceil=-1;
    Node* temp=root;
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            ceil=ele;
        }
        if(temp->data<ele)
        {
            temp=temp->right;
        }
        else{
            ceil=temp->data;
            temp=temp->left;
        }
    }
    return ceil;
}
int FindFloor(Node * root,int ele)
{
    Node* temp= root;
    int floor=-1;
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            floor=ele;
        }
        if(temp->data>ele)
        {
            temp=temp->left;
        }
        else{
            floor=temp->data;
            temp=temp->right;
        }
    }
    return floor;
}
int main()
{
    Node* root = NULL;
    cout<<"Enter data"<<endl;
    Input(root);
    cout<<"Enter the element for finding ceil and floor"<<endl;
    int ele;
    cin>>ele;
    int ceil=FindCeil(root,ele);
    if(ceil==-1)
    {
        cout<<"Ceil Not found"<<endl;
    }else{
        cout<<"Ceil of "<<ele<<" is "<<ceil<<endl;
    }

    int floor=FindFloor(root,ele);
    if(floor==-1)
    {
        cout<<"floor Not found"<<endl;
    }else{
        cout<<"floor of "<<ele<<" is "<<floor<<endl;
    }
    return 0;
}