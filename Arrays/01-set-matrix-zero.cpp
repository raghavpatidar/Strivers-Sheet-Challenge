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

Problem : https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
Day : 1
*/

#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void setZeros(vector<vector<int>>& matrix)
{
    int row = 0;
    int col = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m;j++) {
            if (i == 0 || j == 0) {
                if (matrix[i][j] == 0 and i == 0)row = 1;
                if (matrix[i][j] == 0 and j == 0)col = 1;
            }
            else {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
    }
    //marking all row
    for (int i = 1; i < n; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    // marking all col
    for (int j = 1; j < m; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 0; i < n;i++) {
                matrix[i][j] = 0;
            }
        }
    }
    if (col) {
        for (int i = 0; i < n; i++)matrix[i][0] = 0;
    }

    if (row) {
        for (int j = 0; j < m; j++) matrix[0][j] = 0;
    }
}