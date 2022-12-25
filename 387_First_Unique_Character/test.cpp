#include "header.h"

void PrepareTestData(vector<TD_S_I>& testData)
{
    TD_S_I data = {};

    data.input = "leetcode";
    data.output = 0;
    testData.push_back(data);

    data.input = "loveleetcode";
    data.output = 2;
    testData.push_back(data);

    data.input = "aabb";
    data.output = -1;
    testData.push_back(data);
}