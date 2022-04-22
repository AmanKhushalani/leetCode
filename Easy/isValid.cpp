// question link = https://leetcode.com/problems/valid-parentheses/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;
class Solution {
public:
    
    bool isReverse(char bracket1 , char bracket2)
    {
        if(
            (bracket1=='(' && bracket2==')') ||
            (bracket1=='[' && bracket2==']') ||
            (bracket1=='{' && bracket2=='}')
        ) return true;
        return false;
    }
    
    bool isValid(string s) {
        string temp = "";
        for(int i=0 ; i<s.length() ; i++)
        {
            if(i==0)
            {
                temp += s[i];
            }
            else
            {
                if(isReverse(temp.back() , s[i]))
                {
                    temp.pop_back();
                }
                else
                {
                    temp += s[i];
                }
            }
        }
        if(temp.length()>0) return false;
        return true;
        
    }
};