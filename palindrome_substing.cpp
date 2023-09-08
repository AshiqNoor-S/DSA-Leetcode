// Given a string s, partition s such that every 
// substring
//  of the partition is a 
// palindrome
// . Return all possible palindrome partitioning of s.

// Example 1:

// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]
// Example 2:

// Input: s = "a"
// Output: [["a"]]

// Solution:

class Solution {
public:
    bool checkPalindrome(string &str,int s,int e){
        int n = str.size();
        while(s<=e){
            if(str[s++] != str[e--])
                return false;
        }
        return true;
    }
    void solve(int idx,string &s,vector<string> &temp,vector<vector<string>> &v){
        if(idx == s.size()){
            v.push_back(temp);
            return;
        }
        string str = "";
        for(int i=idx;i<s.size();i++){
            str += s[i];
            if(checkPalindrome(s,idx,i) == true){
                temp.push_back(str);
                solve(i+1,s,temp,v);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp; 
        vector<vector<string>> v;
        solve(0,s,temp,v);
        return v;
    }
};