#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data = {};

    data.input = 0;
    data.output = 1;
    testData.push_back(data);

    data.input = 1;
    data.output = 10;
    testData.push_back(data);

    data.input = 2;
    data.output = 91;
    testData.push_back(data);

    data.input = 3;
    data.output = 739;
    testData.push_back(data);

    data.input = 4;
    data.output = 5275;
    testData.push_back(data);
}