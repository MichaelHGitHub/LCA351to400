#include "header.h"

void PrepareTestData(vector<TD_VI_VI_I_VVI>& testData)
{
    TD_VI_VI_I_VVI data = {};

    data.input = { 1, 1, 2 };
    data.input2 = { 1, 2, 3 };
    data.input3 = 10;
    data.output = {{1, 1}, {1, 1}, {2, 1}, {1, 2}, {1, 2}, {2, 2}, {1, 3}, {1, 3}, {2, 3}};
    testData.push_back(data);

    data.input = { 1,7,11 };
    data.input2 = { 2,4,6 };
    data.input3 = 3;
    data.output = { {1, 2}, {1, 4}, {1, 6} };
    testData.push_back(data);

    data.input = { 1,1,2 };
    data.input2 = { 1,2,3 };
    data.input3 = 2;
    data.output = { {1, 1}, {1, 1} };
    testData.push_back(data);

    data.input = { 1,2 };
    data.input2 = { 3 };
    data.input3 = 2;
    data.output = { {1, 3}, {2, 3} };
    testData.push_back(data);

    data.input = { 1,2 };
    data.input2 = { 3 };
    data.input3 = 3;
    data.output = { {1, 3}, {2, 3} };
    testData.push_back(data);

    data.input = { 1,7,11 };
    data.input2 = { 2,4,6 };
    data.input3 = 3;
    data.output = {{1, 2}, {1, 4}, {1, 6}};
    testData.push_back(data);




}