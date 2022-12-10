#include "header.h"

int getMoneyAmount(vector<vector<int>>& records, int begin, int end);

int getMoneyAmount(int n)
{
    vector<vector<int>> records(n + 1, vector<int>(n + 1, 0));
    return getMoneyAmount(records, 1, n);
}


int getMoneyAmount(vector<vector<int>>& records, int begin, int end)
{
    if (begin >= end)
    {
        return 0;
    }

    if (records[begin][end] != 0)
    {
        return records[begin][end];
    }

    int cost = INT32_MAX;

    for (int i = begin; i <= end; i++)
    {
        cost = min(cost,
            max(
                getMoneyAmount(records, begin, i - 1),
                getMoneyAmount(records, i + 1, end))
            + i);

    }
    records[begin][end] = cost;
    return cost;
}