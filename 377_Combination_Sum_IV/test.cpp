#include "header.h"

void PrepareTestData(vector<TD_VI_I_I>& testData) {
    TD_VI_I_I data = {};

    data.input = { 4,2,1 };
    data.input2 = 32;
    data.output = 39882198;
    testData.push_back(data);

    data.input = { 1,2,3 };
    data.input2 = 4;
    data.output = 7;
    testData.push_back(data);

    data.input = { 9 };
    data.input2 = 3;
    data.output = 0;
    testData.push_back(data);

}