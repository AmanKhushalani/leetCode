// question link = https://leetcode.com/problems/generate-parentheses/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;
class Solution {
public:
    int rec(vector<string> &pairs , int a , int b , string current)
    {
        if(a==0 && b==0)
        {
            pairs.push_back(current);
            return 0;
        }
        if(a>0)
        {
            rec(pairs , a-1 , b , current+"(");
        }
        if(b>0 && !(b-1<a))
        {
            rec(pairs , a , b-1 , current+")");
        }
        return 0;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> pairs;
        rec(pairs , n , n , "");
        return pairs;
    }
};