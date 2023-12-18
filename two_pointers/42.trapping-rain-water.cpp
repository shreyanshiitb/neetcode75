/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &h)
    {
        int n = h.size();
        int ans = 0;
        int l = 0, r = n - 1;
        int lgr = h[l];
        int rgr = h[r];
        while (l < r)
        {
            if (lgr < rgr)
            {
                l++;
                ans += max(0, lgr - h[l]);
                lgr = max(lgr, h[l]);
            }
            else
            {
                r--;
                ans += max(0, rgr - h[r]);
                rgr = max(rgr, h[r]);
            }
        }

        return ans;
    }
};
// @lc code=end
