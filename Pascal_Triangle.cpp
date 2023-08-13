// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

// Solution:

class Solution {
public:
    vector<int> generate_row(int row){
        vector<int> ans;
        ans.push_back(1);
        long long a = 1;
        for(int col=1;col<row;col++){
            a = a*(row-col);
            a = a/col;
            ans.push_back(a);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generate_row(i));
        }
        return ans;
    }
};