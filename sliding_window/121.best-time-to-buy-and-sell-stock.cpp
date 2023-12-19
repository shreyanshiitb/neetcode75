/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        int n = p.size();
        int ans = 0;
        int l = 0, r = l + 1;
        while (r < n)
        {
            if (p[r] <= p[l])
            {
                l = r;
            }
            else
            {
                ans = max(ans, p[r] - p[l]);
            }
            r++;
        }
        return ans;
    }
};
// @lc code=end
