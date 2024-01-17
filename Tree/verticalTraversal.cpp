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
vector<vector<int>>verticalTrav(Node* root)
{
    map<int,map<int,multiset<int>>>mp;
    queue<pair<Node* ,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        Node* node=p.first;
        int line=p.second.first;
        int lvl=p.second.second;
        mp[line][lvl].insert(node->data);
        if(node->left!=NULL)
        {
            q.push({node->left,{line-1,lvl+1}});
        }
        if(node->right!=NULL)
        {
            q.push({node->right,{line+1,lvl+1}});
        }
    }
    vector<vector<int>>ans;
    for(auto k:mp)
    {
        vector<int>c;
        for(auto m:k.second)
        {
            c.insert(c.end(),m.second.begin(),m.second.end());
        }
        ans.push_back(c);
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    vector<vector<int>>v=verticalTrav(root);
    for(auto ele:v)
    {
        for(auto n:ele)
        {
            cout<<n<<" ";
        }
        cout<<"\n";
    }
    return 0;
}