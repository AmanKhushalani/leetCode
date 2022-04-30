// question link = https://leetcode.com/problems/palindrome-number/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;
        long int result = 0 , temp=x;
        while(temp>0)
        {
            result = result*10 + temp%10;
            temp/=10;
        }
        if(result == x) return true;
        
        return false;
    }
};