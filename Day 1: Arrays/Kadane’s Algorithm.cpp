//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum = 0, msf = nums[0];
        for(auto curr : nums) {
            sum += curr;
            if(sum > msf)  msf = sum;
            if(sum < 0) sum = 0;
        }
        return msf;
    }
};
