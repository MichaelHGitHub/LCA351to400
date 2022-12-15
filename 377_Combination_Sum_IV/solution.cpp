#include "header.h"
#include <unordered_map>

int GetComNum(vector<int>& nums, int target, unordered_map< int, int>& history);

int combinationSum4(vector<int>& nums, int target) {
    unordered_map<int, int> history;
    return GetComNum(nums, target, history);
}


int GetComNum(vector<int>& nums, int target, unordered_map<int, int>& history) {
    int num = 0;
    if (0 == target) {
        num = 1;
    }
    else if (target < 0) {
        num = 0;
    }
    else {

        if (history.find(target) != history.end()) {
            return history[target];
        }

        for (int i = 0; i < nums.size(); i++) {
            num += GetComNum(nums, target - nums[i], history);
        }
    }

    history[target] = num;
    return num;
}