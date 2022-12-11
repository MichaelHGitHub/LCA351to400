#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData) {
    TD_VI_I data = {};

    data.input = { 1,7,4,9,2,5 };
    data.output = 6;
    testData.push_back(data);

    data.input = { 1,17,5,10,13,15,10,5,16,8 };
    data.output = 7;
    testData.push_back(data);

    data.input = { 1,2,3,4,5,6,7,8,9 };
    data.output = 2;
    testData.push_back(data);
}