#include "header.h"

void PrepareTestData(vector<TD_VVI_I_I>& testData) {
    TD_VVI_I_I data = {};

    data.input = { {1,2}, {1,3} };
    data.input2 = 3;
    data.output = 2;
    testData.push_back(data);

    data.input = { {-5,-4}, {-5,-4} };
    data.input2 = 2;
    data.output = -5;
    testData.push_back(data);

    data.input = { {1, 5, 9}, {10, 11, 13}, {12, 13, 15} };
    data.input2 = 8;
    data.output = 13;
    testData.push_back(data);

    data.input = { {1,2}, {1,3} };
    data.input2 = 1;
    data.output = 1;
    testData.push_back(data);

    data.input = {{-5}};
    data.input2 = 1;
    data.output = -5;
    testData.push_back(data);
}