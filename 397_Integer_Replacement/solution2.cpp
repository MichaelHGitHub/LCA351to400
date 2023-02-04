#include "header.h"

int integerReplacement2(int n) {
    if (n < 2) {
        return 0;
    }
    vector<int> dp(n + 2);
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        if ((i & 1) > 0) {
            dp[i + 1] = dp[(i + 1) >> 1] + 1;
            dp[i] = min(dp[i - 1], dp[i + 1]) + 1;
            i++;
        }
    }
    return dp[n];
}
