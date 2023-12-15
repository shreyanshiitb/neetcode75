/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int,int> loc;
        loc[nums[0]] = 0;
        for(int i=1;i<nums.size();i++){
            int other = target-nums[i];
            if(loc.count(other)){
                return {loc[other], i};
            }
            loc[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
