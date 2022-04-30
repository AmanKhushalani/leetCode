// question link =  https://leetcode.com/problems/find-closest-number-to-zero/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& arr) 
    {
        
        int closestNumber = arr[0];
        int closestNumberIndex = 0;

        for(int i=1 ; i<arr.size() ; i++)
        {
            if(abs(arr[i]) < abs(closestNumber))
            {
                closestNumber = arr[i];
            }
            else if(abs(arr[i]) == abs(closestNumber))
            {
                closestNumber = arr[i]>closestNumber?arr[i]:closestNumber;
            }
        }
        return closestNumber;   
    }
};