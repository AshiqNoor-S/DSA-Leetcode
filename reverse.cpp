// signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321

//Solution:

class Solution {
public:
    int reverse(int x) {
        long digit=0;
        while(x!=0){
            int temp=x%10;
            digit=digit*10+temp;
            x=x/10;
        }
        if(digit>INT_MAX || digit<INT_MIN) return 0;
        return digit;
    }
};