#include "..\common\common.h"

class Solution {
public:
    Solution(vector<int>& nums) {
        data = nums;
    }

    vector<int> reset() {
        return data;
    }

    vector<int> shuffle() {
        vector<int> result(data.begin(), data.end());
        for (int i = data.size() - 1; i >= 0; i--) {
            int j = rand() % (i + 1);
            // Once the elements are swapped, not only we
            // determined result[i], result[j] is also not
            // the same, then it won't cause duplication later.
            int temp = result[i];
            result[i] = result[j];
            result[j] = temp;
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