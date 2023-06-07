/*
┌────────────────────────────────────────────────────────────────────────────────────────┐
│                      *-----------Raghav Patidar----------*                             |
|                   Fuck Ratings,Just Enjoy the Contest/Questions                        |
|                      I'm in Love with Experience and Learning.                         |
│                                                                                        |
|    Leetcode   : https://leetcode.com/manito7/                                          |
|    CodingNinja: https://bit.ly/3IW2Nqi                                                 |
│    Github     : https://github.com/raghavpatidar                                       |
|    LinkedIn   : https://www.linkedin.com/in/raghavpatidar07/                           |
|    Resume     : https://drive.google.com/file/d/1nsTqWKSzxl-tcIXARi_b6vMSVcz57cVQ/view |
|    Codeforces : https://codeforces.com/profile/raghavpatidar                           |
|                                                                                        |
└────────────────────────────────────────────────────────────────────────────────────────┘

Problem : https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int>& arr, int n)
{
    int pivot = -1;
    //break point 
    for (int i = n - 2;i >= 0; i--) {
        if (arr[i + 1] > arr[i]) {
            pivot = i;
            break;
        }
    }
    // fully dreacresing order so reversing complete array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    //find next greater element
    for (int i = n - 1; i >= 0;i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }
    reverse(arr.begin() + pivot + 1, arr.end());
    return arr;
}