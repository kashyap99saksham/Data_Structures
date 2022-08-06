// https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>>ans;
        
        pair<int, int>pr = {intervals[0][0],intervals[0][1]};
        for(int i = 1; i < n; i++)  {
            
            if(intervals[i][0] <= pr.second )    {
                
                pr.second = max(pr.second, intervals[i][1]);
                                
            }   else {
                ans.push_back({pr.first, pr.second});
                pr = {intervals[i][0], intervals[i][1]};
            }
        }
        ans.push_back({pr.first, pr.second});
        return ans;
    }
};
