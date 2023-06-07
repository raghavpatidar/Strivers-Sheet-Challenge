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

Problem : https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge
Day : 2
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
#define ll long long int
vector<ll> getRow(int n) {
    //  ll ans = 1;
    vector<ll> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++) {
        ll x = (ans.back() * (n - i)) / i;
        ans.push_back(x);
    }
    return ans;
}


vector<vector<long long int>> printPascal(int n)
{
    vector<vector<ll>>ans;
    for (int i = 1; i <= n; i++) {
        ans.push_back(getRow(i));
    }
    return ans;
}
