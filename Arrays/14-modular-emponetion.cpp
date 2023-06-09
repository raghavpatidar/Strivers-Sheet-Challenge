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

Problem : https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    // Write your code here.
    // x^n%m;
    long  ans = 1;
    long xx = x;
    while (n > 0)
    {
        if (n % 2 == 1) {
            ans = (ans % m * xx % m) % m;
            // n--;
        }
        xx = (xx % m * xx % m) % m;
        n = n >> 1;
    }
    return ans % m;



}