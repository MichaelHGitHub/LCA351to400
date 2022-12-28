#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data = {};

    data.input = 1;
    data.output = 1;
    testData.push_back(data);

    data.input = 9;
    data.output = 6;
    testData.push_back(data);

    data.input = 15;
    data.output = 8;
    testData.push_back(data);

    data.input = 16;
    data.output = 6;
    testData.push_back(data);

    data.input = 105;
    data.output = 62;
    testData.push_back(data);
}