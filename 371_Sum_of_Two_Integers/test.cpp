#include "header.h"

void PrepareTestData(vector<TD_I_I_I>& testData)
{
    TD_I_I_I data = {};

    data.input = 1;
    data.input2 = 2;
    data.output = 3;
    testData.push_back(data);

    data.input = 2;
    data.input2 = 3;
    data.output = 5;
    testData.push_back(data);
}