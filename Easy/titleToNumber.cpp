// question link = https://leetcode.com/problems/excel-sheet-column-number/submissions/
#include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
public:
    int titleToNumber(string str) 
    {
        
        int length = str.length();
        int count = 0;
        for(int i=0 ; i<length ; i++)
        {
            if(length == 1 || i==length-1)
                count += (str.at(i)-64);
            else
                count += (pow(26 , length-(i+1)) * (str.at(i)-64));
        }
        return count;   
    }
};