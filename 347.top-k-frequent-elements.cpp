/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        int maxCount = INT_MIN;
        for (int num : nums)
        {
            m[num]++;
            maxCount = max(maxCount,m[num]);
        }

        // maxCount is bounded by nums.size()
        vector<vector<int>> buckets(maxCount+1);
        for (auto &[key,val]:m)
        {
            buckets[val].push_back(key);
        }

        vector<int> ans;
        // O(n+k)
        for (auto it = buckets.rbegin(); it != buckets.rend(); it++)
        {
            auto bucket = *it;
            if(!bucket.empty())
            {
                for(auto topKVal:bucket)
                {
                    ans.push_back(topKVal);
                    if(ans.size() == k) return ans;
                }
            }
        }

        return {};
    }
};
// @lc code=end
