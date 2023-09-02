// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
 

class Solution {
public:
    void subset(int ind, vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp) {
        if (ind == nums.size()) {
            ans.push_back(temp);
            return;
        }
        subset(ind + 1, nums, ans, temp);
        temp.push_back(nums[ind]);
        subset(ind + 1, nums, ans, temp);
        temp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int ind = 0;
        vector<vector<int>> ans;
        vector<int> temp;
        subset(ind, nums, ans, temp);
        return ans;
    }
};
