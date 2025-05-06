#include <iostream>
#include <climits>
using namespace std;

int cutRodMemo(int price[], int n, int dp[]) {
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];

    int maxProfit = INT_MIN;

    for (int i = 1; i <= n; i++) {
        int profit = price[i - 1] + cutRodMemo(price, n - i, dp);
        maxProfit = max(maxProfit, profit);
    }

    return dp[n] = maxProfit;
}
