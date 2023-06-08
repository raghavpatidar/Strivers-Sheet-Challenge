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

Problem : Sort by Start Time https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
static bool comp(vector<int>& a, vector<int>& b) {
    if (a[0] < b[0])return true;
    else if (a[0] > b[0])return false;
    else return a[1] < b[1];
}

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals)
{
    sort(intervals.begin(), intervals.end(), comp);
    vector<vector<int>>ans;
    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (ans.back()[1] < intervals[i][0]) {
            //new
            ans.push_back(intervals[i]);
        }
        else {
            //    update
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        }
    }
    cout << endl;
    return ans;
}
