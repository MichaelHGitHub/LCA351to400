#include "header.h"

// After rotating k times, AK[0] = nums[(n - k) % n], if k < n,
// then AK[0] = nums[n - k].
// DP[k] - DP[k-1] = sum - n*AK[0]

/*
F(k)    = 0 * Bk[0] + 1 * Bk[1] + ... + (n-1) * Bk[n-1]
F(k-1)  = 0 * Bk-1[0] + 1 * Bk-1[1] + ... + (n-1) * Bk-1[n-1]
        = 0 * Bk[1] + 1 * Bk[2] + ... + (n-2) * Bk[n-1] + (n-1) * Bk[0]
Then,
F(k) - F(k-1) = Bk[1] + Bk[2] + ... + Bk[n-1] - (n - 1)Bk[0]
              = (Bk[0] + ... + Bk[n-1]) - nBk[0]
              = sum - nBk[0]
Thus,
F(k) = F(k-1) + sum - nBk[0]

*/

int maxRotateFunction2(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        dp[0] += i * nums[i];
    }

    int max_val = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = dp[i - 1] + sum - n * nums[n - i];
        max_val = max(dp[i], max_val);
    }
    return max_val;
}
