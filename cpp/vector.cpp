//vector
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //vectors
//     vector<int>v;
//     v.push_back(40);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     v.pop_back();
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

    //vector array
    #include<bits/stdc++.h>
    using namespace std;
    void printvec(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
         cout<<endl;
    }
    int main()
    {
        //10 vectors of 0 size
        //v[1]- 2nd vector
        //v[2]- 3rd vector
        cout<<"Enter the size"<<endl;
        int N;
        cin>>N;
        vector<int>v[N];
        for(int i=0;i<N;i++)
        {
            cout<<"Enter "<<i<<" vector size"<<endl;
            int n;
            cin>>n;
            cout<<"Enter the elements now"<<endl;
            for(int j=0;j<n;j++)
            {
                
                int x;
                cin>>x;
                v[j].push_back(x);        
            }
        }
        cout<<"Vector"<<endl;
        for(int i=0;i<N;i++)
        {
            printvec(v[i]);
                   }
    }

    //vector of vector
    // #include<bits/stdc++.h>
    // using namespace std;
    // void printvec(vector<int>v)
    // {
    //     for(int j=0;j<v.size();j++)
    //     {
    //         cout<<v[j]<<" ";
    //     }
    // }
    // int main()
    // {
    //     vector<vector<int>>v;
    //     //every single vector holds one vector
    //     cout<<"Enter the no. of rows for vector ";
    //     int N;
    //     cin>>N;
    //     for(int i=0;i<N;i++)
    //     {
    //         cout<<"Enter num of column for "<<i<<" row "<<endl;
    //         int n;
    //         cin>>n;
    //         vector<int>temp;
    //         cout<<"Enter the elements ";
    //         for(int i=0;i<n;i++)
    //         {
    //             int x;
    //             cin>>x;
    //             temp.push_back(x);
    //         }
    //         v.push_back(temp);
    //     }
    //     cout<<"Vector: "<<endl;
    //     for(int i=0;i<N;i++)
    //     {
    //         printvec(v[i]);
    //         cout<<endl;
    //     }
    // }
