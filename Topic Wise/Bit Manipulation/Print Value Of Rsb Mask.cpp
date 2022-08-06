// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/print-value-of-rsb-mask-official/ojquestion
#include<bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin>>n;
    int setMask = (n & ((~n) + 1));     // another solution can be n & -n,  here -n is 2's compliment
    string binValue = (bitset<32>(setMask).to_string());                // dec to bin 
    bool flag = false;
    for(auto i : binValue)    {
        if(flag) cout<<i;
        if(i=='1')    {
            cout<<i;
            flag = true;
        }
    }
}
