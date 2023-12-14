/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for(char &c:s){
            count[c]++;
        }
        for(char &c:t){
            count[c]--;
        }
        for(auto &[k,v]:count){
            if(v!=0) return false;
        }
        return true;
    }
};
// @lc code=end

