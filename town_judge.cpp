// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.


// Example 1:

// Input: n = 2, trust = [[1,2]]
// Output: 2
// Example 2:

// Input: n = 3, trust = [[1,3],[2,3]]
// Output: 3

// Solution:

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(trust.size()==0)
        {
            if(n==1)
            {
                return 1;
            }
            return -1;
        }
        unordered_map<int,int>trustedbyhowmany;
        unordered_map<int,bool>trustsanyone;
        for(int i=0;i<trust.size();i++)
        {
            trustedbyhowmany[trust[i][1]]++;
            trustsanyone[trust[i][0]]=true;
        }
        for(auto j:trustedbyhowmany)
        {
            if(!trustsanyone[j.first] && j.second==(n-1))
            {
                return j.first;
            }
        }
        return -1;
    }
};