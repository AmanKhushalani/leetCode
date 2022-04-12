// question link = https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    map<int , int> dict;
    int j=0;
    int removeDuplicates(vector<int>& nums) {
          for(int i=0 ; i<nums.size() ; i++)
          {
              dict[nums[i]] += 1;
              if(dict[nums[i]] == 1)
              {
                  nums[j] = nums[i];
                  j++;
              }
          }
        return j;
    }
};

int main()
{

}