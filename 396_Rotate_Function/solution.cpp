#include "header.h"

// After rotating k times, arr[0] = nums[(n - k) % n], if k < n,
// then arr[0] = nums[n - k]. arr[j] = nums[n - k + j]
int maxRotateFunction(vector<int>& nums) {

    int n = nums.size();
    int max_val = INT32_MIN;
    // F(0) -> F(n-1)
    for (int i = 0; i < n; i++) {
        // For each F(i)
        int f_i = 0;
        for (int j = 0; j < n; j++) {
            f_i += (j * nums[(n - i + j) % n]);
        }
        max_val = max(f_i, max_val);
    }
    return max_val;
}
