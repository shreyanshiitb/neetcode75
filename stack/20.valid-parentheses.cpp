/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string t) {
        stack<char> s;
        unordered_map<char,char> m = {{'{','}'},{'[',']'},{'(',')'}};

        for(char c:t){
            if(c == '(' || c == '[' || c == '{')
            {
                s.push(c);
            }
            else
            {
                if(s.empty()) return false;

                char curr = s.top();
                if(m[curr]!=c) return false;
                s.pop();
            }
        }
        return s.empty();
    }
};
// @lc code=end

