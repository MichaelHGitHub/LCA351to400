#include "header.h"

// dp[i] = dp[i-1] + sum_with_0 + sum_no_0
// Without 0, combination can be i digits while
// sum_no_0 = 9 * (9-1) * (9-2) * ...* ( 9 - i + 2) * ( 9 - i + 1)
// Withou 0, combination can only be i - 1 digits(0 is fixed)
// sum_with_0 = 9 * (9-1) * (9-2) * ...* ( 9 - i + 2) , but there are (i - 1)
// kind of sum_with_0, so there total sum_with_0 is (i - 1) * sum_with_0;
int countNumbersWithUniqueDigits(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 1;
    if (n > 0)
    {
        dp[1] = 10;
    }

    for (int i = 2; i <= n; i++)
    {
        int sum_no_0 = 9;
        int sum_0 = 9;
        int count = 1;

        while (count < i)
        {
            sum_no_0 *= (9 - count);
            count++;
        }
        sum_0 = sum_no_0 / (10 - i) * (i - 1);

        dp[i] = dp[i - 1] + sum_0 + sum_no_0;
    }
 
    return dp[n];
}