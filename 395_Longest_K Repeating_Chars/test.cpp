#include "header.h"

void PrepareTestData(vector<TD_S_I_I>& testData)
{
    TD_S_I_I data = {};

    data.input = "bbaaacbd";
    data.input2 = 3;
    data.output = 3;
    testData.push_back(data);

    data.input = "ababacb";
    data.input2 = 3;
    data.output = 0;
    testData.push_back(data);

    data.input = "aaabb";
    data.input2 = 3;
    data.output =3;
    testData.push_back(data);

    data.input = "ababbc";
    data.input2 = 2;
    data.output = 5;
    testData.push_back(data);

}