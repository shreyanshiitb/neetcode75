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
        // hash map from string idx to string's char count
        unordered_map<int, unordered_map<char, int>> m;

        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string &currStr = strs[i];
            unordered_map<char, int> currStrCount;
            for (char &c : currStr)
            {
                currStrCount[c]++;
            }
            m[i] = currStrCount;
        }

        vector<vector<string>> ans;
        unordered_set<int> vis;

        for (int i = 0; i < n; i++)
        {
            if (vis.count(i))
            {
                continue;
            }
            vector<string> currGroup;
            vis.insert(i);
            currGroup.push_back(strs[i]);

            for (int j = i + 1; j < n; j++)
            {

                if (!vis.count(j) && strs[i].size() == strs[j].size())
                {
                    bool isAnagram = true;
                    for (auto &[k, v] : m[i])
                    {
                        if (!m[j].count(k) || m[j][k] != v)
                        {
                            isAnagram = false;
                            break;
                        }
                    }
                    for (auto &[k, v] : m[j])
                    {
                        if (!m[i].count(k) || m[i][k] != v)
                        {
                            isAnagram = false;
                            break;
                        }
                    }
                    if (isAnagram)
                    {
                        vis.insert(j);
                        currGroup.push_back(strs[j]);
                    }
                }
            }
            ans.push_back(currGroup);
        }
        return ans;
    }
};
// @lc code=end
