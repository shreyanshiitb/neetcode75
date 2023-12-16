/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &h)
    {

        int n = h.size();
        int ans = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            ans = max(ans, (j - i) * min(h[i], h[j]));
            if (h[i] <= h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
// @lc code=end
