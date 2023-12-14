/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> m;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto &[k, v] : m)
        {
            ans.push_back(v);
        }
        return ans;
    }
};
// @lc code=end
