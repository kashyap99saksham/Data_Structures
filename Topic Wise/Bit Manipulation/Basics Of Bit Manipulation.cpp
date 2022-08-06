// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/basics-of-bit-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

int main()  {
    int n,i,j,k,m;
    cin>>n>>i>>j>>k>>m;
    
    int setMask = (1 << i);
    int unsetMask = ~(1 << j);
    int toggleMask = (1 << k);
    int checkMask = (1 << m);
    cout<<(n | setMask)<<endl;
    cout<<(n & unsetMask)<<endl;
    cout<<(n ^ toggleMask)<<endl;
    cout<<((n & checkMask)==0 ? "false" :  "true" )<<endl;
    
    
    
}
