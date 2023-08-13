#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;
    //input
    p=make_pair(1,"Dustin");
    cout<<p.first<<" "<<p.second<<endl;
    p={2,"Steve"};
    //output
    cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;
    

    //pair of array
    pair<int,int>p_array[3];
    p_array[0]={7,9};
    p_array[1]={9,0};
    p_array[2]={3,5};
    cout<<"Pair of array"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}