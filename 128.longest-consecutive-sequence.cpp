/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    unordered_map<int,int> m;
    unordered_set<int> vis;
public:

    int dfs(int k)
    {
        if(vis.count(k)){
            return m[k];
        }

        vis.insert(k);

        if(m.count(k+1)){
            return m[k] = 1 + dfs(k+1);
        }

        return m[k];
    }

    int longestConsecutive(vector<int>& nums) {

        for(int i:nums){
            if(!m.count(i))
                m[i]++;
        }

        int ans = 0;
        for(auto &[k,v]:m){
            ans = max(ans, dfs(k));
        }
        return ans;
    }
};
// @lc code=end

