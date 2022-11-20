#include "header.h"

void PrepareTestData(vector<TD_VI_VI>& testData)
{
    TD_VI_VI data = {};

    data.input = { 1,2,3 };
    data.output = { 1, 2 };
    testData.push_back(data);

    data.input = { 1,2,4,8 };
    data.output = { 1,2,4,8 };
    testData.push_back(data);

    data.input = { 3, 4, 16, 8 };
    data.output = { 4, 16, 8 };
    testData.push_back(data);
}