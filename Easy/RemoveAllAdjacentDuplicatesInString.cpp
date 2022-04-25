// question link =  https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        string result = "";
        result += s[0];
        for(int i=1 ; i<s.length();i++)
        {
            if(result.back() == s[i])
            {
                result.pop_back();
            }
            else
            {
                result+=s[i];
            }
        }

        return result;
        
    }
};