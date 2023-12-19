/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;

        int start = 0, n = s.length();
        int ans = 0, i = 0;
        while (i < n)
        {
            char c = s[i];
            if (m.count(c) && m[c] >= start)
            {
                ans = max(ans, i - start);
                start = m[c] + 1;
            }
            m[c] = i++;
        }
        ans = max(ans, i - start);
        return ans;
    }
};
// @lc code=end
