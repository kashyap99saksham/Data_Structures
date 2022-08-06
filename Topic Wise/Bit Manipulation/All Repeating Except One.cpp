//https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/all-repeating-except-one-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n, ans = 0;
    cin>>n;
    vector<int>vec(n);
    for(int i = 0; i < n; i++)  cin>>vec[i];
    for(int i = 0; i < n; i++)  ans = (ans^vec[i]);         // a^a^b^b^c = c, since a cut a, b cut b
    cout<<ans;
}
