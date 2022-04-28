// question link = https://leetcode.com/problems/n-th-tribonacci-number/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    long int tribonacci(int n) 
    {
        long int arr[n+1];
        for(int i=0 ; i<=n ; i++)
        {
            if(i<2)
            {
                arr[i] = i;
            }else if(i==2){
                arr[i] = 1;
            }
            else{
                arr[i] = arr[i-1] + arr[i-2]  + arr[i-3];
            }
        }
        return arr[n];
    }
};
