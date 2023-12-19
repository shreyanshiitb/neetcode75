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
        int maxi = p[n - 1];
        int ans = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            ans = max(ans, max(0, maxi - p[i]));
            maxi = max(maxi, p[i]);
        }
        return ans;
    }
};
// @lc code=end
