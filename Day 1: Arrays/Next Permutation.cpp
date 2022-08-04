// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return;
        int firstBreakPoint;
        for(int i = n-2; i >= 0; i--)  {        // finding first breakPoint
            if(nums[i] < nums[i+1]) {
                firstBreakPoint = i;
                break;                
            }
        }
        if(firstBreakPoint < 0) reverse(nums.begin(),nums.end());   // if array is in desc. order
        else    {
            for(int j = n-1; j > firstBreakPoint; j--)    {         // finding greater element than firstBreakPoint from right
                if(nums[firstBreakPoint] < nums[j])   {
                    swap(nums[firstBreakPoint], nums[j]);       // swapping firstBreakPoint with greater element
                    break;
                }
            }
            reverse(nums.begin()+firstBreakPoint+1, nums.end());        // sort firstBreakPoint+1 to end
        }
        
        for(auto i: nums)   cout<<i<<" ";
    }
};
// 1 3 5 4 2
// 1 4 5 3 2
