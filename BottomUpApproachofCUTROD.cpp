#include <iostream>
#include <climits>
using namespace std;

int cutRodBottomUp(int price[], int n) {
    int dp[n + 1];
    dp[0] = 0; // No rod means no profit

    for (int len = 1; len <= n; len++) {
        int maxProfit = INT_MIN;

        // Try cutting the rod into pieces of length i (1 to len)
        for (int i = 1; i <= len; i++) {
            int profit = price[i - 1] + dp[len - i];
            maxProfit = max(maxProfit, profit);
        }

        dp[len] = maxProfit;
    }

    return dp[n];
}
