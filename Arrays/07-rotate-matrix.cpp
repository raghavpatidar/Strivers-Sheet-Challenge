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

Problem : https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge
Day :
*/

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>>& mat, int n, int m)
{
    if (n == 1 || m == 1) return;
    //pinter approach 
    int top = 0, bot = n - 1, left = 0, right = m - 1;
    while (top < bot && left < right) {
        int temp = mat[left][top];
        //moving from top to bottom last column
        for (int i = top;i < bot;i++)
            mat[i][left] = mat[i + 1][left];

        //moving from left to right first row 
        for (int i = left;i < right;i++)
            mat[bot][i] = mat[bot][i + 1];
        //moving to bottom to up first column
        for (int i = bot;i > top;i--)
            mat[i][right] = mat[i - 1][right];
        //moving from right to left last row 
        for (int i = right;i > left + 1;i--)
            mat[top][i] = mat[top][i - 1];

        //fixing value of first element
        mat[top][left + 1] = temp;
        top++, bot--, left++, right--;
    }
}
