#include "header.h"

void PrepareTestData(vector<TD_I_VI>& testData)
{
    TD_I_VI data = {};

    data.input = 13;
    data.output = { 1,10,11,12,13,2,3,4,5,6,7,8,9 };
    testData.push_back(data);

    data.input = 2;
    data.output = { 1, 2 };
    testData.push_back(data);
}