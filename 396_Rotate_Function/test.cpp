#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data = {};

    data.input = { 4,3,2,6 };
    data.output = 26;
    testData.push_back(data);

    data.input = { 100 };
    data.output = 0;
    testData.push_back(data);

}
