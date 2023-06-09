/*
┌────────────────────────────────────────────────────────────────────────────────────────┐
│                      *-----------Raghav Patidar----------*                             |
|                   Fuck Ratings,Just Enjoy the Contest/Questions                        |
|                      I'm in Love with Experience and Learning.                         |
│                                                                                        |
|    Leetcode   : https://leetcode.com/manito7/                                          |
│    Github     : https://github.com/raghavpatidar                                       |
|    LinkedIn   : https://www.linkedin.com/in/raghavpatidar07/                           |
|    Resume     : https://drive.google.com/file/d/1nsTqWKSzxl-tcIXARi_b6vMSVcz57cVQ/view |
|    Codeforces : https://codeforces.com/profile/raghavpatidar                           |
|                                                                                        |
└────────────────────────────────────────────────────────────────────────────────────────┘

Problem : https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int>& arr, int n)
{
    int d, m;

    for (int i = 0; i < n; i++) {
        int idx = abs(arr[i]);
        idx--;
        if (arr[idx] < 0) {
            d = abs(arr[i]);
        }
        else {
            arr[idx] = -arr[idx];
        }
    }

    for (int i = 0; i < n;i++)if (arr[i] > 0)m = i + 1;
    return { m ,d };

}
