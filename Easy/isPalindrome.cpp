// question link = https://leetcode.com/problems/valid-palindrome/submissions/
#include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        string des = "" , result = "";
        for(int i=0 ; i<s.length() ; i++)
        {

            if(s[i]>=97 && s[i]<=122)
            {
                des += (s[i]-32);
            }
            else if((s[i]>=65 && s[i]<=90) || (s[i]>=48 && s[i]<=57))
            {
                des += (s[i]);
            }
        }
        result = des;
        reverse(des.begin() , des.end());
        if(des == result) return true;
        return false;
    }
};