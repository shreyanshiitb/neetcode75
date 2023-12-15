/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n,1);
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        int right = nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};
// @lc code=end

