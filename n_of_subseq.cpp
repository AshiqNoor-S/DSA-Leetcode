// You are given an array of integers nums and an integer target.

// Return the number of non-empty subsequences of nums such that the sum of the minimum and maximum element on it is less or equal to target. Since the answer may be too large, return it modulo 109 + 7.


// Example 1:

// Input: nums = [3,5,6,7], target = 9
// Output: 4
// Explanation: There are 4 subsequences that satisfy the condition.
// [3] -> Min value + max value <= target (3 + 3 <= 9)
// [3,5] -> (3 + 5 <= 9)
// [3,5,6] -> (3 + 6 <= 9)
// [3,6] -> (3 + 6 <= 9)

//Solution:

class Solution {
public:
    int mod = 1e9+7;
    int power(long long x, unsigned int y, int p){
        int res = 1;
        x = x % p;
        if (x == 0) return 0;
        while (y > 0){
            if (y & 1)
                res = (res*x) % p;
            y = y>>1;
            x = (x*x) % p;
        }
        return res;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int cnt = 0;
        for(int i=0, j=nums.size()-1; i<nums.size();){
            while(i<=j && nums[i] + nums[j] > target){
                j--;
            }

            if(j >= i)
                cnt = ((cnt%mod) + (power(2.0,(j-i), mod)%mod))%mod;          
            i++;
        }
    
        return cnt;
    }
};