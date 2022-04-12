// question link = 
// #include <bits/stdc++.h>
#include <iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int arr[10] = {1,2,3,3,5,6,7,8,9,10};

    int left = 0;
    int right = 9;
    int middle = (left+right+1)/2;
    int target = 4;
    bool found = false;
    while(left!=middle && middle!=right)
    {
        if(arr[middle] == target || arr[left] == target || arr[right] == target)
        {
            cout<<"found";
            found = true;
            break;
        }

        else if(arr[middle] < target)
        {
            left = middle;
            middle = (left+right)/2;
        }
        else if(arr[middle] > target)
        {
            right = middle;
            middle = (left+right)/2;
        }

    }
    if(!found) cout<<"Not Found !";
}