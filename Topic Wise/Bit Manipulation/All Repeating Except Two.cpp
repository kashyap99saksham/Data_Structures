#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n, totalXor = 0;cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)  cin>>arr[i];
    int Xor = 0, a = 0, b = 0;
    for (int i = 0; i < n; i++) Xor ^= arr[i];      // xor of all numbers
    int set_bit_no = Xor & (~Xor + 1);      // find rsb
    for (int i = 0; i < n; i++) {           // for every element check if (element & rsb) is zero or not
        if (arr[i] & set_bit_no)
            a = a ^ arr[i];                 // this find first no.
        else    
            b = b ^ arr[i];                 // this find second no.
    }
    if(a>b)cout<<b<<endl<<a;
    else cout<<a<<endl<<b;
}
