// question link = https://leetcode.com/problems/min-cost-climbing-stairs/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) 
    {
        int n = arr.size();
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(i==n-1) arr[i] = arr[i];
            else if(i==n-2) arr[i] = (arr[i]+arr[i+1] > arr[i])?arr[i]:arr[i]+arr[i+1];
            else
            {
                arr[i] = ((arr[i]+arr[i+1] > arr[i]+arr[i+2]) ? arr[i]+arr[i+2] : arr[i]+arr[i+1]);
            }

        }

        return arr[0]>arr[1]?arr[1]:arr[0];

    }
};