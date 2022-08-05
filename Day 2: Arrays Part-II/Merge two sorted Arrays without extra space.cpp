// https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m - 1, right = n - 1;
        int k = nums1.size();
        while(right >= 0)   {
            while(right >=0 && left >= 0 && nums2[right] < nums1[left])   {
                nums1[--k] = nums1[left--];
            }
            if(k>=0 && right>=0)
            nums1[--k] = nums2[right--];
        }
        for(auto i : nums1) cout<<i<<" ";
    }
};
