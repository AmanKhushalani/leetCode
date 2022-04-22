// question link = https://leetcode.com/problems/maximum-subarray/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<vector>


using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& array) {
        int currentSum = 0;
        int highestSum = array[0];

        for(int i=0 ; i<array.size() ; i++)
        {
            currentSum =  max(array[i] , currentSum+array[i]);
            if(currentSum > highestSum)
            {
                highestSum = currentSum;
            }
        }
        return highestSum;
    }
};