// question link = https://leetcode.com/problems/reverse-integer/submissions/
#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int temp = x % 10;
        x = x / 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;

        rev = rev * 10 + temp;
    }
    return rev;
}


int main()
{
    cout << reverse(-1534);
}