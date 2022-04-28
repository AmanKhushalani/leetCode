// question link = 
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;


bool repeatedSubstringPattern(string s) {
        if(s.length()%2==1) return false;
        
        string str1 = "";
        string str2 = "";
        
        for(int i=0; i<s.length()/2 ; i++)
        {
            str1+=s[i];
        }

        return str1 == s.substr(s.length()/2 , s.length());        
    }


int main()
{

    cout<<repeatedSubstringPattern("abba");

}