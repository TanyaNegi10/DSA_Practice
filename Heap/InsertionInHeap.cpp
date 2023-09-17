#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
     heap()
     {
        arr[0]=-1;
        size=0;
     }

     void insertVal(int val)
     {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
     }

     void print()
     {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
};
int main()
{
    heap h;
    h.insertVal(76);
    h.insertVal(66);
    h.insertVal(71);
    h.insertVal(40);
    h.insertVal(29);
    h.insertVal(37);
    h.insertVal(70);
    h.print();
    return 0;
}