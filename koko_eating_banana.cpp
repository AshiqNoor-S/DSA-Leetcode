// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30

//Solution:

class Solution {
public:
    long long calTime(vector<int> piles, int h){
        int n = piles.size();
        long long remTime = 0;
        for(int i=0;i<n;i++){
            remTime+=ceil(((double)piles[i]/(double)h));
        }
        return remTime;
    }

    int maxi(vector<int> piles){
        int m = 0;
        for(auto it: piles){
            if(it>m){
                m=it;
            }
        }
        return m;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;int high=maxi(piles);
        while(low<=high){
            int mid= (low+high)/2;
            long long time = calTime(piles,mid);
            if(time<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};