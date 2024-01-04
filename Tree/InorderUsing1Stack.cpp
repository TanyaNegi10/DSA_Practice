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
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter the data for inserting in the left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for inserting in the right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
vector<int>inorder(Node* root)
{
    stack<Node*>st;
    Node* temp=root;
    vector<int>ans;
    while(true)
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty()==true)
            {
                break;
            }
            temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            temp=temp->right;
        }
    }
    return ans;
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<int>inorderTrav=inorder(root);
    for(auto ele:inorderTrav)
    {
        cout<<ele<<" ";
    }
    return 0;
}