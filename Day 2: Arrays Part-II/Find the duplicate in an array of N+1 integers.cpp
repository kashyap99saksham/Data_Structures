// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {          
        int slow = nums[0], fast = nums[0];
        do  {                                       // detect cycle 
            slow = nums[slow];
            fast = nums[nums[fast]];
        }   while(slow != fast);
        slow = nums[0];                             // move any pointet to start then jump by one
        while(slow != fast)   {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
