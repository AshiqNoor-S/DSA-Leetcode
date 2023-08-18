// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

//Solution:

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }else if(nums[i]==0){
                cnt=0;
            }
            if(cnt>max){
                max=cnt;
            }
        }
        return max;
    }
};