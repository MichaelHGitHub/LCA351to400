#include "header.h"

void PrepareTestData(vector<TD_VI_B>& testData)
{
    TD_VI_B data = {};

    data.input = { 237 };
    data.output = false;
    testData.push_back(data);

    data.input = { 197, 130, 1 };
    data.output = true;
    testData.push_back(data);

    data.input = { 235,140,4 };
    data.output = false;
    testData.push_back(data);
}