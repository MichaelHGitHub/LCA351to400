#include "header.h"
#include <queue>

vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k)
{
    vector<vector<int>> result;
    auto my_comparison = [&nums1, &nums2](pair<int, int> p1, pair<int, int> p2)
    {
        return nums1[p1.first] + nums2[p1.second] > nums1[p2.first] + nums2[p2.second];
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(my_comparison)> s1(my_comparison);

    s1.push({ 0, 0 });

    while (!s1.empty() && result.size() < k)
    {
        pair<int, int> p = s1.top();
        s1.pop();
        result.push_back(vector<int>({ nums1[p.first], nums2[p.second] }));

        // Check the link for explaination
        // https://leetcode.com/problems/find-k-pairs-with-smallest-sums/discuss/84551/simple-Java-O(KlogK)-solution-with-explanation

        if (p.second == 0 && p.first < nums1.size() - 1)
        {
            s1.push({ p.first + 1, p.second });
        }

        if (p.second < nums2.size() - 1)
        {
            s1.push({ p.first, p.second + 1});
        }
    }

    return result;
}

