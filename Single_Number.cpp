// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]
// Output: 1

//Solution:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int XOR1 = 0;
        for(int i = 0;i<n;i++){
            XOR1=XOR1^nums[i];
        }
        return XOR1;
    }
};