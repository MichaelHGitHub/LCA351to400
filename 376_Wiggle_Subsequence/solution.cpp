#include "header.h"

vector<vector<int>> getSubSequence(vector<int>& nums, int start, int pre, int flag);

int wiggleMaxLength(vector<int>& nums) {

    int len = INT32_MIN;
    vector<vector<int>> results = getSubSequence(nums, 1, nums[0], 1);

    for (int i = 0; i < results.size(); i++)
    {
        len = max(len, (int)results[i].size());
    }

    results = getSubSequence(nums, 1, nums[0], -1);
    for (int i = 0; i < results.size(); i++)
    {
        len = max(len, (int)results[i].size());
    }

    return (int)len + 1;
}

vector<vector<int>> getSubSequence(vector<int>& nums, int start, int pre, int flag) {

    vector<vector<int>> results;

    if (start >= nums.size()) {
        return results;
    }

    for (int i = start; i < nums.size(); i++) {

        if (flag > 0 && nums[i] >= pre) {
            continue;
        }

        if (flag < 0 && nums[i] <= pre) {
            continue;
        }

        vector<vector<int>> sub_results = getSubSequence(nums, i + 1, nums[i], -flag);

        if (sub_results.size() > 0) {
            for (int j = 0; j < sub_results.size(); j++) {
                sub_results[j].insert(sub_results[j].begin(), nums[i]);
                results.push_back(sub_results[j]);
            }
        }
        else
        {
            results.push_back({ nums[i] });
        }
    }

    return results;
}