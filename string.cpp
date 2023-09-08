// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.

// Example 1:

// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
// Example 2:

// Input: num = "4206"
// Output: ""
// Explanation: There are no odd numbers in "4206".

// Solution:

class Solution {
public:
    string largestOddNumber(string num) {
        string temp;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                for(int j=0;j<=i;j++){
                    temp+=num[j];
                }
                break;
            }
        }
        return temp;
    }
};