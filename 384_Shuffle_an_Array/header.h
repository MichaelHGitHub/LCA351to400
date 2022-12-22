#include "..\common\common.h"
#include <unordered_set>

class Solution {
public:
    Solution(vector<int>& nums) {
        data = nums;
    }

    vector<int> reset() {
        return data;
    }

    vector<int> shuffle() {
        vector<int> result(data.size());
        unordered_set<int> used;
        for (int i = 0; i < data.size(); i++) {
            int selected_index = rand() % data.size();
            while (used.find(selected_index) != used.end()) {
                selected_index = rand() % data.size();
            }
            result[i] = data[selected_index];
            used.insert(selected_index);
        }
        return result;
    }

private:
    vector<int> data;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */