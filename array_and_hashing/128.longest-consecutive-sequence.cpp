/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> m;
        for (int i : nums)
        {
            m.insert(i);
        }

        int ans = 0;
        for (auto k : m)
        {
            int currAns = 1;
            if (!m.count(k - 1))
            {
                int _k = k;
                while (m.count(_k + 1))
                {
                    currAns++;
                    _k++;
                }
                ans = max(ans, currAns);
            }
        }
        return ans;
    }
};
// @lc code=end
