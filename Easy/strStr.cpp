// question link = https://leetcode.com/problems/implement-strstr/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int strStr(string a, string b) {
        
        int temp = a.find(b);
        if(temp > a.length()) return -1;
        
        return temp;
    }
};