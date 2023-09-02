//Set the bit 
//Ex-- 5 -> 0 1 0 1      now set 1th bit
//ans= 7 -> 0 1 1 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;     // 0 1 1 0
    int bit;
    cout<<"Enter the bit which u want to set"<<endl;
    cin>>bit;
    int tempBit=1;
    while (bit>0)
    {
        tempBit=tempBit<<1;
        bit--;
    }
    
    n=n^tempBit;
    cout<<n;
    return 0;
}

