// question link = https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
public:
    int minimumCardPickup(vector<int>& arr) 
    {
        int minimum = -1;
        map<int , int> count;
        map<int , int> index;

        for(int i=0 ; i<arr.size() ; i++)
        {
            if(count[arr[i]] > 0)
            {
                if(minimum == -1)
                {
                    minimum = i - index[arr[i]] + 1;
                }
                else
                {
                    minimum = (minimum<(i - index[arr[i]] + 1))?minimum:(i - index[arr[i]] + 1);
                }
            }
            count[arr[i]] += 1;
            index[arr[i]] = i;
        }
        return minimum;
    }
};