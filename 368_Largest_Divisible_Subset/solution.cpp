#include "header.h"
#include <algorithm>

// sort in ascending order
// dp[nums.size()][2]: [0]= current sub-set size, 
//                     [1] = the index of next number in the same sub-set
// Note: first element in dp has next index if the key to track the sub-set
// at final step so we add 1 to the original array if 1 doesn't exist.
vector<int> largestDivisibleSubset(vector<int>& nums) {
    if (nums.size() < 2){
        return nums;
    }

    std::sort(nums.begin(), nums.end());
    bool remove_first = false;
    if (nums[0] != 1)
    {
        nums.insert(nums.begin(), 1);
        remove_first = true;
    }

    vector<int[2]> dp(nums.size());
    for (int i = nums.size() - 1; i >= 0; i--) {
        dp[i][0] = 0;
        dp[i][1] = i;

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] % nums[i] == 0) {
                if (dp[j][0] > dp[i][0]) {
                    dp[i][0] = dp[j][0];
                    dp[i][1] = j;
                }
            }
        }
        ++dp[i][0];
    }

    int index = 0;
    vector<int> result;
    result.push_back(nums[index]);
    while (dp[index][1] != index)
    {
        result.push_back(nums[dp[index][1]]);
        index = dp[index][1];
    }

    if (remove_first)
    {
        result.erase(result.begin());
    }
    return result;
}