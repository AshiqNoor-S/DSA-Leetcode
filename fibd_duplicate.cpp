// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3

//Solution:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.find(nums[i])!=ans.end()){
                return nums[i];
            }else{
                ans[nums[i]]++;
            }
        }
        return 0;
    }
};