/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<char, int> m;
        auto maxCount = [&m]()
        {
            int maxi = 0;
            for (auto &[k, v] : m)
            {
                maxi = max(maxi, v);
            }
            return maxi;
        };

        int l = 0, r = 0, ans = 0;
        int n = s.length();
        m[s[r]]++;
        while (r < n)
        {
            if ((r - l + 1) - maxCount() <= k)
            {
                ans = max(ans, (r - l + 1));
                r++;
                m[s[r]]++;
            }
            else
            {
                m[s[l]]--;
                l++;
            }
        }
        return ans;
    }
};
// @lc code=end
