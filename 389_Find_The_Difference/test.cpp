#include "header.h"

void PrepareTestData(vector<TD_S_S_I>& testData)
{
    TD_S_S_I data = {};

    data.input = "abcd";
    data.input2 = "abcde";
    data.output = 'e';
    testData.push_back(data);

    data.input = "";
    data.input2 = "y";
    data.output = 'y';
    testData.push_back(data);
}