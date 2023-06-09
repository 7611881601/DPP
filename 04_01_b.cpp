#include <bits/stdc++.h>
using namespace std;
 
int KS_recursion(int W, int wt[], int val[], int i, int** dp)
{
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];
 
    if (wt[i] > W) {
 
        dp[i][W] = KS_recursion(W, wt, val, i - 1, dp);
        return dp[i][W];
    }
    else {
        dp[i][W] = max(val[i]
                           + KS_recursion(W - wt[i], wt, val,
                                         i - 1, dp),
                       KS_recursion(W, wt, val, i - 1, dp));
 
        return dp[i][W];
    }
}
 
int knapSack(int W, int wt[], int val[], int n)
{
    int** dp;
    dp = new int*[n];
 
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return KS_recursion(W, wt, val, n - 1, dp);
}
 
int main()
{
    int profit[] = { 60, 100, 120 };
    int weight[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << knapSack(W, weight, profit, n);
    return 0;
}