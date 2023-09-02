// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]

//Solution:

class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &nums,vector<int> &dp,int freq[]){
        if(nums.size()==dp.size()){
            ans.push_back(dp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                dp.push_back(nums[i]);
                freq[i]=1;
                solve(ans,nums,dp,freq);
                freq[i]=0;
                dp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int freq[n];
        for(int i=0;i<n;i++){
            freq[i]=0;
        }
        vector<vector<int>> ans;vector<int> dp;
        solve(ans,nums,dp,freq);
        return ans;
    }
};