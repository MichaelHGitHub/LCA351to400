#include "header.h"

int getSubCount(vector<int>& nums, int index, bool flag);

int wiggleMaxLength2(vector<int>& nums) {

    return max(getSubCount(nums, 0, true), getSubCount(nums, 0, false));
}

int getSubCount(vector<int>& nums, int index, bool flag) {

    if (index >= nums.size()) {
        return 0;
    }
    else if (index == nums.size() - 1) {
        return 1;
    }

    int count = 0;

    for (int i = index + 1; i < nums.size(); i++) {

        if ((flag && nums[i] > nums[index]) ||
            (!flag && nums[i] < nums[index])) {

            count = max(count, 1 + getSubCount(nums, i, !flag));
        }
    }
    return count;
}