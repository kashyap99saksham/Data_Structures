// https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size(), minVal = -9999999;
        vector<int>fillRow(r,-1), fillCol(c,-1);
        
        for(int i=0;i<r;i++)    {
            for(int j=0;j<c;j++)    {
                
                if(matrix[i][j]==0) {
                    fillRow[i] = 0;
                    fillCol[j] = 0;
                }
            }
        }
        // fillRow[1]
        
        
        for(int i=0;i<r;i++)    {
            for(int j=0;j<c;j++)    {
                
                if(fillRow[i]==0 || fillCol[j]==0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
