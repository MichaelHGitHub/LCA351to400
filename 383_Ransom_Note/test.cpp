#include "header.h"

void PrepareTestData(vector<TD_S_S_B>& testData)
{
    TD_S_S_B data = {};

    data.input = "a";
    data.input2 = "b";
    data.output = false;
    testData.push_back(data);

    data.input = "aa";
    data.input2 = "ab";
    data.output = false;
    testData.push_back(data);

    data.input = "aa";
    data.input2 = "aab";
    data.output = true;
    testData.push_back(data);
}