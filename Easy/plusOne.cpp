// question link =  https://leetcode.com/problems/plus-one/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size()-1;
        while(1)
        {
            if(last<0)
            {
                digits.insert(digits.begin() , digits[0]+1);
                break;
            }
            else if(digits[last]+1>9)
            {
                digits[last] = 0;
                last--;
            }
            else
            {
                digits[last] += 1;
                break;
            }
        }
        return digits;
    }
};
