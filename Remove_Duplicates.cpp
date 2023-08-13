// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

// Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=nums.size();
        int i=0;
        while(i<cnt-1){
            if(nums[i]==nums[i+1]){
                int x = nums[i];
                nums.erase(nums.begin()+i);
                cnt--;
                nums.push_back(x);
            }else{
                i++;
            }
        }
        return cnt;
    }
};