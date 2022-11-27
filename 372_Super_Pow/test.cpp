#include "header.h"

void PrepareTestData(vector<TD_I_VI_I>& testData)
{
    TD_I_VI_I data = {};

    data.input = 2147483647;
    data.input2 = { 2, 0, 0 };
    data.output = 1135;
    testData.push_back(data);

    data.input = 2;
    data.input2 = {3};
    data.output = 8;
    testData.push_back(data);

    data.input = 2;
    data.input2 = { 1,0 };
    data.output = 1024;
    testData.push_back(data);

    data.input = 1;
    data.input2 = { 4,3,3,8,5,2 };
    data.output = 1;
    testData.push_back(data);


}