/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> vis;

        for (int num : nums)
        {
            if (vis.count(num))
            {
                return true;
            }
            vis.insert(num);
        }
        return false;
    }
};
// @lc code=end
