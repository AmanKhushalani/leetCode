// question link = https://leetcode.com/problems/fibonacci-number/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
public:
    int fib(int n) 
    {
        int arr[n+1];
        for(int i=0 ; i<=n ; i++)
        {
            if(i<2)
            {
                arr[i] = i;
            }
            else{
                arr[i] = arr[i-1] + arr[i-2];
            }
        }
        return arr[n];
    }
};