// question link = https://leetcode.com/problems/length-of-last-word/submissions/
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string a) {
        
        int counter = 0;
        for (int i = a.length()-1; i>=0 ; i--)
        {
            if( ((a[i]>=97&&a[i]<=122) || (a[i]>=65&&a[i]<=90)) && counter==0)
            {
                counter+=1;
            }
            else if(a[i]==' ' && counter)
            {
                break;
            }
            else if(counter)
            {
                counter+=1;
            }

        }
        return counter;
    }
};