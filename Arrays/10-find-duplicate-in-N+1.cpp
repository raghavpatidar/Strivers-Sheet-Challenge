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

Problem : https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=0
Day :
*/

#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

int findDuplicate(vector<int>& arr, int n) {
    // cycle detection

    int slow = arr[0], fast = arr[0];
    do {
        fast = arr[arr[fast]];
        slow = arr[slow];

    } while (fast != slow);
    fast = arr[0];
    while (fast != slow) {
        fast = arr[fast];
        slow = arr[slow];
    }
    return slow;

}
