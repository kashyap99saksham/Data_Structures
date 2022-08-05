// https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        for(int i = 0; i < r-1; i++)    {
            for(int j = i+1; j < c; j++)    {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < r; i++)    {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i = 0; i < r-1; i++)    {
            for(int j = i+1; j < c; j++)    {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
};
