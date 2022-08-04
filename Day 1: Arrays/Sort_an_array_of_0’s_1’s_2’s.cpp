// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>tracker(3);
        for(int i=0;i<nums.size();i++)  {
            tracker[nums[i]]++;
        }
        int ind=0;
        for(int i=0;i<3;i++)  {
            while(tracker[i]>0)   {
                nums[ind++]=i;
                tracker[i]--;
            }
        }
    }
};
