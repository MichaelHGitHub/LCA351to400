#include "header.h"

void PrepareTestData(vector<TD_S_S_B>& testData)
{
    TD_S_S_B data = {};

    data.input = "axc";
    data.input2 = "ahbgdc";
    data.output = false;
    testData.push_back(data);

    data.input = "ab";
    data.input2 = "baab";
    data.output = true;
    testData.push_back(data);

    data.input = "abc";
    data.input2 = "ahbgdc";
    data.output = true;
    testData.push_back(data);

    data.input = "acbc";
    data.input2 = "ahcebgdc";
    data.output = true;
    testData.push_back(data);
}