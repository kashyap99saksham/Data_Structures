// https://www.interviewbit.com/problems/repeat-and-missing-number-array/
// Approch : https://www.youtube.com/watch?v=MvklwzVz654&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=10

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int Xor = 0;
    vector<int>ans;
    
    // XOR with every element in array and with 1...n
    // this will give Xor of two different elements

    for(auto i : A) Xor ^= i;
    for(int i = 1; i <= A.size(); i++)   Xor ^= i;

    // find right most set bit

    int rsb = Xor & (~Xor + 1);
    int a = 0, b = 0;

    // find both number, if (rsb & element) is 0 then it will give 1 element, otherwise second.
    for(auto i : A)  {
        if(i & rsb)
            a ^= i;
        else b ^= i;
    }
    for(int i = 1; i <= A.size(); i++)   {
        if(i & rsb)
            a ^= i;
        else b ^= i;
    }

     // check if a is present in array then a is repeating other b is repeating
    for(auto i : A) {
        if(i == a)  {
            ans.push_back(a);
            ans.push_back(b);
            break;
        } else if(i == b) {
            ans.push_back(b);
            ans.push_back(a);
            break;
        }
    }
    return ans;

}
