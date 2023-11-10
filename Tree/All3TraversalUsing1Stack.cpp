//3 Traversal using 1 stack
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
vector<vector<int>>traversal(Node* root)
{
    stack<pair<Node* ,int>>st;
    st.push({root,1});
    vector<int>preorder,postorder,inorder;
    vector<vector<int>>ans;
    if(root==NULL)
    {
        return ans;
    }
    while(!st.empty())
    {
        auto it=st.top();
        st.pop();
        if(it.second==1)
        {
            preorder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL)
            {
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2)
        {
            inorder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
            {
                st.push({it.first->right,1});
            }
        }
        else{
            postorder.push_back(it.first->data);
        }
    }
    ans.push_back(preorder);
    ans.push_back(inorder);
    ans.push_back(postorder);
    return ans;
}
int main()
{
    Node *root=NULL;
    root=buildtree(root);
    vector<vector<int>>trav=traversal(root);
    cout<<"All tree traversal preorder,inorder,and postorder are shown respectively"<<endl;
    for(int i=0;i<=trav.size();i++)
    {
        for(int j=0;j<trav[i].size();j++)
        {
            cout<<trav[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}