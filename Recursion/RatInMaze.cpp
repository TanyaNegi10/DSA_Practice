// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

// Example 1:

// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1}, 
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at 
// (3, 3) from (0, 0) by two paths - DRDDRR 
// and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.

//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int i,int j,vector<vector<int>>&a,int n,vector<string>&ans,string path,vector<vector<int>>&vis)
// {
//     if(i==n-1 && j==n-1)
//     {
//         ans.push_back(path);
//         return;
//     }
//     if(i+1<n && !vis[i+1][j] && a[i+1][j]==1)
//     {
//         vis[i][j]=1;
//         solve(i+1,j,a,n,ans,path+'D',vis);
//         vis[i][j]=0;
//     }
//     if(j-1>=0 && !vis[i][j-1] && a[i][j-1]==1)
//     {
//         vis[i][j]=1;
//         solve(i,j-1,a,n,ans,path+'L',vis);
//         vis[i][j]=0;
//     }
//     if(j+1<n && !vis[i][j+1] && a[i][j+1]==1)
//     {
//         vis[i][j]=1;
//         solve(i,j+1,a,n,ans,path+'R',vis);
//         vis[i][j]=0;
//     }
//     if(i-1>=0 && !vis[i-1][j] && a[i-1][j]==1)
//     {
//         vis[i][j]=1;
//         solve(i-1,j+1,a,n,ans,path+'U',vis);
//         vis[i][j]=0;
//     }
// }
// vector<string> findpath(vector<vector<int>>&m,int n)
// {
//     vector<string>ans;
//     vector<vector<int>>vis(n,vector<int>(n,0));
//     if(m[0][0]==1){
//         solve(0,0,m,n,ans,"",vis);
//         return ans;
//     }
// }
// int main()
// {
//     vector<vector<int>>m={{1, 0, 0, 0},
//          {1, 1, 0, 1}, 
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}};
//     int n=4;
//     vector<string>a=findpath(m,n);
//     for(auto ele:a)
//     {
//         cout<<ele<<" ";
//     }
//     return 0;
// }

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
void solve(int i,int j,vector<vector<int>>&a,int n,vector<string>&ans,string path,vector<vector<int>>&vis,int di[],int dj[])
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(path);
        return;
    }
    string dir="DLRU";
    for(int ind=0;ind<4;ind++)
    {
        int nexti=i+di[ind];
        int nextj=j+dj[ind];
        if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && a[nexti][nextj]==1)
        {
            vis[i][j]=1;
            solve(nexti,nextj,a,n,ans,path+dir[ind],vis,di,dj);
            vis[i][j]=0;
        }
    }
}
vector<string> findpath(vector<vector<int>>&m,int n)
{
    vector<string>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    int di[]={1,0,0,-1};
    int dj[]={0,-1,1,0};
    if(m[0][0]==1){
        solve(0,0,m,n,ans,"",vis,di,dj);
        return ans;
    }
}
int main()
{
    vector<vector<int>>m={{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
    int n=4;
    vector<string>a=findpath(m,n);
    for(auto ele:a)
    {
        cout<<ele<<" ";
    }
    return 0;
}