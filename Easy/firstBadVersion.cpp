// question link = https://leetcode.com/problems/first-bad-version/
#include <bits/stdc++.h>

using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // 6
        long left = 1, right = n, mid = n/2;
        int answer = -1;
        while(left<=right)
        {
            if(isBadVersion(mid)) 
            {
                answer = mid;
                right = mid-1;
                mid = (left+right) / 2;
            }
            else
            {
                left = mid + 1;
                mid = (long (left) + long (right) ) / 2;
            }
        }
        return answer;
    }
};
