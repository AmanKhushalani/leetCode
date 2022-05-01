// question link = https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string str) 
    {
        int highest = 0;
        for(int i=0 ; i<str.length() ; i++)
        {
            string temp = "";
            map<char , int> pair;
            for(int j=i ; j<str.length() ; j++)
            {
                if(pair[str[j]]>0) break;
                pair[str[j]] = 1;
                temp += str[j];
            }
            highest = (highest > temp.length())?highest:temp.length();
        }
        return highest;
        
    }
};