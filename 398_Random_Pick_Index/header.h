#pragma once

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    Solution(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            mappings[nums[i]].push_back(i);
        }
    }

    int pick(int target) {
        int result = 0;
        if (mappings[target].size() == 1) {
            result = mappings[target][0];
        }
        else {
            int index = rand() % mappings[target].size();
            result = mappings[target][0];
        }
        return result;
    }

private:
    map<int, vector<int>> mappings;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */