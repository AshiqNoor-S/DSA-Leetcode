// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true

//Solution:

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for (int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }else if((ch==')'||ch=='}'||ch==']') && !st.empty()){
                char t = st.top();
                if(t=='(' && ch==')' || t=='[' && ch==']' || t=='{' && ch=='}' ){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }else{
                st.push(ch);
            }
        }
        if(st.empty()){
            return 1;
        }return 0;
    }
};