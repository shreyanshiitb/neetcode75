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
        vector<int> leftGreatest(n);
        vector<int> rightGreatest(n);
        int ans = 0;

        leftGreatest[0] = h[0];
        rightGreatest[n - 1] = h[n - 1];
        for (int i = 1; i < n; i++)
        {
            leftGreatest[i] = max(leftGreatest[i - 1], h[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            rightGreatest[i] = max(rightGreatest[i + 1], h[i]);
        }

        for (int i = 0; i < n; i++)
        {
            ans += min(leftGreatest[i], rightGreatest[i]) - h[i];
        }
        return ans;
    }
};
// @lc code=end
