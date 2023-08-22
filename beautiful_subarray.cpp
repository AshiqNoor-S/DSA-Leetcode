// You are given a 0-indexed integer array nums. In one operation, you can:

// Choose two different indices i and j such that 0 <= i, j < nums.length.
// Choose a non-negative integer k such that the kth bit (0-indexed) in the binary representation of nums[i] and nums[j] is 1.
// Subtract 2k from nums[i] and nums[j].
// A subarray is beautiful if it is possible to make all of its elements equal to 0 after applying the above operation any number of times.

// Return the number of beautiful subarrays in the array nums.

// A subarray is a contiguous non-empty sequence of elements within an array.

 //Solution  :

 class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int n = nums.size();
        map<int,int> temp;
        int xr = 0;
        temp[xr]++;
        long long cnt=0;
        for(int i=0;i<n;i++){
            xr^=nums[i];
            int x = xr^0;
            cnt+=temp[x];
            temp[xr]++;
        }
        return cnt;
    }
};