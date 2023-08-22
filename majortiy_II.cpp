// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]
// Example 2:

// Input: nums = [1]
// Output: [1]
// Example 3:

// Input: nums = [1,2]
// Output: [1,2]

//Solution:

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        vector<int>final;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto i:ans){
            if(i.second > nums.size()/3){
                final.push_back(i.first);
            }
        }
        return final;
    }
};