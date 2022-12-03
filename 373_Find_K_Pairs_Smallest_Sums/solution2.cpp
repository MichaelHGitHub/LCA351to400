#include "header.h"
#include <queue>

vector<vector<int>> kSmallestPairs2(vector<int>& nums1, vector<int>& nums2, int k)
{
    auto my_comparison = [&nums1, &nums2](pair<int, int> p1, pair<int, int> p2)
    {
        return nums1[p1.first] + nums2[p1.second] < nums1[p2.first] + nums2[p2.second];
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(my_comparison)> s1(my_comparison);

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (s1.size() == k &&
                (nums1[s1.top().first] + nums2[s1.top().second] > nums1[i] + nums2[j]))
            {
                s1.pop();
            }

            s1.push(pair<int, int>(i, j));
        }
    }

    int number = min((int)s1.size(), k);
    vector<vector<int>> result(number);
    int index = number - 1;
    while (!s1.empty() && index >= 0)
    {
        if (s1.size() <= number)
        {
            result[index--] = { nums1[s1.top().first], nums2[s1.top().second] };
        }
        s1.pop();
    }
    return result;
}

