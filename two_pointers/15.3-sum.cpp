/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){

            int j = i+1;
            int k = n-1;

            while(j<k){
                int currSum = nums[i] + nums[j] + nums[k];
                if(currSum < 0){
                    j++;
                }
                else if(currSum > 0){
                    k--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j+1<n && nums[j]==nums[j+1]) j++;
                    while(k-1>=0 && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
            }

            while(i+1<n-2 && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};
// @lc code=end

