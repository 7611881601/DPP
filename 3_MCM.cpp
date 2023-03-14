#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int i, int j)
{
    if (i >= j)
    {
        return 0;
    }
    int min_cost = INT_MAX;
    for (int k = i; k < j - 1; k++)
    {
        int temp = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        min_cost = min(temp, min_cost);
    }
    return min_cost;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 1;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}