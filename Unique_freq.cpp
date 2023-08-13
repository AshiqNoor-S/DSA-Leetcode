// Unique Number of Occurrences

// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

//Solution :

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> s;
        for(int j:arr){
            m[j]++;
        }
        for(auto i:m){
            s.insert(i.second);
        }

        if(m.size()==s.size()){
            return true;
        }

        return false;
    }
};

 