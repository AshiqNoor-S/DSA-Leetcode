// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

//Solution:

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maximum_sum = 0;  
       int current_sum = 0;  
        for(int i=0; i< nums.size(); i++)  {  
            current_sum= current_sum + nums[i];  
            if(current_sum>maximum_sum){  
                maximum_sum = current_sum;  
            }else if(current_sum < 0){  
              current_sum = 0;   
            } 
        }
return maximum_sum;   
}  
};