#include "header.h"

void PrepareTestData(vector<TD_I_I_I>& testData)
{
    TD_I_I_I data = {};

    data.input = 10;
    data.input2 = 6;
    data.output = 6;
    testData.push_back(data);

    data.input = 1;
    data.input2 = 1;
    data.output = 1;
    testData.push_back(data);

    data.input = 2;
    data.input2 = 1;
    data.output = 1;
    testData.push_back(data);

    data.input = 2126753390;
    data.input2 = 1702766719;
    data.output = 1702766719;
    testData.push_back(data);
}