#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteRoot()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int idx = 1;
        while (idx < size)
        {
            int leftindx = 2 * idx;
            int rightindx = 2 * idx + 1;

            if (leftindx < size || rightindx < size)
            {
                if (arr[idx] < arr[leftindx])
                {
                    swap(arr[leftindx], arr[idx]);
                    idx = leftindx;
                }
                if (arr[idx] < arr[rightindx])
                {
                    swap(arr[rightindx], arr[idx]);
                    idx = rightindx;
                }
            }
            else
            {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i)
{
    int l = i;
    int left = 2 * i+1;
    int right = 2 * i + 2;
    if (left <= n && arr[left] > arr[l])
    {
        l = left;
    }
    if (right <= n && arr[right] > arr[l])
    {
        l = right;
    }
    if (l != i)
    {
        swap(arr[l], arr[i]);
        heapify(arr, n, l);
    }
}
};
int main()
{
    heap hs;
    hs.insert(50);
    hs.insert(45);
    hs.insert(69);
    hs.insert(23);
    hs.insert(56);
    hs.insert(11);
    hs.print();
    hs.deleteRoot();
    hs.print();


    return 0;
}