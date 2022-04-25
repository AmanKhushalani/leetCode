// question link =  https://leetcode.com/problems/longest-common-prefix/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    
    string shortString(string result ,string str)
    {
        string answer = "";
        for(int i=0 ; i<(result.length()<str.length()?result.length():str.length()) ; i++)
        {
            if(result[i]!=str[i]) break;
            else answer += str[i];
        }
        return answer;
    }

    string longestCommonPrefix(vector<string>& strs) 
    {
        string result = strs[0];
        for(int i=1 ; i<strs.size() ; i++)
        {
            result = shortString(result , strs[i]);
            if(result=="") break;
        }
        return result;
    }
};