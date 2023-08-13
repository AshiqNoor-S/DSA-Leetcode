// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

// Example 1:

// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Solution:

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int cols = matrix[0].size();
        int rows = matrix.size();
        vector<int> zeroRows(rows, 0);
        vector<int> zeroCols(cols, 0);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeroRows[i] = 1;
                    zeroCols[j] = 1;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            if (zeroRows[i] == 1) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 0; j < cols; j++) {
            if (zeroCols[j] == 1) {
                for (int i = 0; i < rows; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
