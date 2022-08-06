// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/kernighans-algo-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n, count = 0;
    cin>>n;
    while(n!=0)    {
        n = n & (n - 1);    	// change the first set bit from right to 0
        count++;
    }
    cout<<count;
}
