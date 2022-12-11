#include "header.h"

int wiggleMaxLength3(vector<int>& nums) {

    vector<int> up(nums.size(), 0);
    vector<int> down(nums.size(), 0);

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                up[i] = max(up[i], 1 + down[j]);
            }
            else if(nums[i] < nums[j])
            {
                down[i] = max(down[i], 1 + up[j]);
            }
        }
    }
    return 1 + max(up[nums.size() - 1], down[nums.size() - 1]);
}