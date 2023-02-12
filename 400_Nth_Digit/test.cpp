#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data = {};

    data.input = 3;
    data.output = 3;
    testData.push_back(data);

    data.input = 11;
    data.output = 0;
    testData.push_back(data);

    data.input = 12;
    data.output = 1;
    testData.push_back(data);

    data.input = 13;
    data.output = 1;
    testData.push_back(data);

    data.input = 2889;
    data.output = 9;
    testData.push_back(data);

    data.input = 2886;
    data.output = 8;
    testData.push_back(data);

    data.input = 2887;
    data.output = 9;
    testData.push_back(data);



    data.input = 2892;
    data.output = 0;
    testData.push_back(data);

    data.input = 2895;
    data.output = 0;
    testData.push_back(data);
}
