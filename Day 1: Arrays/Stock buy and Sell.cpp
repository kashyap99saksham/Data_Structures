// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), ans=0, leftMin = INT_MAX;
        for(int i = 0; i < n; i++)   {
            if(prices[i] < leftMin) 
                leftMin = prices[i];            
            ans = max(ans, prices[i] - leftMin);
        }
        return ans;
    }
};
