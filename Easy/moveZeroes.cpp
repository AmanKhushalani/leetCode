// question link = https://leetcode.com/problems/move-zeroes/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0 , zero = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
            else zero++;
        }
        for(int i=nums.size()-zero ; i<nums.size() ; i++)
        {
            nums[i] = 0;
        }
    }
};