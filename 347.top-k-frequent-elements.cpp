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
        for (int num : nums)
        {
            m[num]++;
        }

        auto comp = [&m](int n1, int n2){
            return m[n1] > m[n2];
        };

        priority_queue<int, vector<int>, decltype(comp)> q(comp);

        for (auto &[key, val] : m)
        {
            q.push(key);
            if(q.size() > k){
                q.pop();
            }
        }

        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(q.top());
            q.pop();
        }

        return ans;
    }
};
// @lc code=end
