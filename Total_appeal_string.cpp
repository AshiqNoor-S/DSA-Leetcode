
// User Accepted:1311
// User Tried:2736
// Total Accepted:1466
// Total Submissions:4761
// Difficulty:Hard
// The appeal of a string is the number of distinct characters found in the string.

// For example, the appeal of "abbca" is 3 because it has 3 distinct characters: 'a', 'b', and 'c'.
// Given a string s, return the total appeal of all of its substrings.

// A substring is a contiguous sequence of characters within a string.

 

// Example 1:

// Input: s = "abbca"
// Output: 28
// Explanation: The following are the substrings of "abbca":
// - Substrings of length 1: "a", "b", "b", "c", "a" have an appeal of 1, 1, 1, 1, and 1 respectively. The sum is 5.
// - Substrings of length 2: "ab", "bb", "bc", "ca" have an appeal of 2, 1, 2, and 2 respectively. The sum is 7.
// - Substrings of length 3: "abb", "bbc", "bca" have an appeal of 2, 2, and 3 respectively. The sum is 7.
// - Substrings of length 4: "abbc", "bbca" have an appeal of 3 and 3 respectively. The sum is 6.
// - Substrings of length 5: "abbca" has an appeal of 3. The sum is 3.
// The total sum is 5 + 7 + 7 + 6 + 3 = 28.

//Solution:

#include <set>

class Solution {
public:
    long long appealSum(string s) {
        int n = s.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            unordered_set<char> temp;
            for(int j=i;j<n;j++){
                temp.insert(s[j]);
                int c = temp.size();
                sum+=c;
            }
            
        }
        return sum;
    }
};