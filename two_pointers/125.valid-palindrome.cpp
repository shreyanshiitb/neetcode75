/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string clean;
        for (char c : s)
        {
            if (isalnum(c))
            {
                clean += tolower(c);
            }
        }

        int i = 0, j = clean.size() - 1;
        while (i < j)
        {
            if (clean[i] != clean[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
// @lc code=end
