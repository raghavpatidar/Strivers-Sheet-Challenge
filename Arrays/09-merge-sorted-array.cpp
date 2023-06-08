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

Problem : https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = arr1.size() - 1, j = arr2.size() - 1;
    while (i >= 0 and j >= 0) {
        arr1[i--] = arr2[j--];
    }
    int len = arr1.size();
    int gap = (len / 2 + len % 2);
    while (gap > 0) {
        int l = 0, r = gap;
        while (r < arr1.size()) {
            if (arr1[l] > arr1[r])swap(arr1[l], arr1[r]);
            l++, r++;
        }
        if (gap == 1)break;
        gap = gap / 2 + gap % 2;

    }
    return arr1;
}
