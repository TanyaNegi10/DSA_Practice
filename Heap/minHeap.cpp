#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap()
    {
        size=0;
        arr[0]=-1;
    }
    void insertval(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]>arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }
    void print()
    {
        
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};
int main()
{
    Heap h;
    h.insertval(98);
    h.insertval(23);
    h.insertval(40);
    h.insertval(12);
    h.insertval(34);
    h.print();


    return 0;
}
