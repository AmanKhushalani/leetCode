// question link = https://leetcode.com/problems/climbing-stairs/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int getways(int n , int arr[])
    {
        for(int i=0 ; i<=n ; i++)   
        {
            if(i==0)
            {
                arr[i] = 1;
            }
            else if(i==1)
            {
                arr[i] = arr[i-1];
            }
            else
            {
                arr[i] = arr[i-1] + arr[i-2];
            }
        }
        return arr[n];
    }
    int climbStairs(int n) {
        int arr[n+1];
        return getways(n ,arr);
    }
    
};