#include "header.h"

void PrepareTestData(vector<TD_I_I_I_B>& testData)
{
    TD_I_I_I_B data = {};

    data.input = 3;
    data.input2 = 5;
    data.input3 = 4;
    data.output = true;
    testData.push_back(data);

    data.input = 2;
    data.input2 = 6;
    data.input3 = 5;
    data.output = false;
    testData.push_back(data);

    data.input = 1;
    data.input2 = 2;
    data.input3 = 3;
    data.output = true;
    testData.push_back(data);
}