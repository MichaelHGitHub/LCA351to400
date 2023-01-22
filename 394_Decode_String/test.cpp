#include "header.h"

void PrepareTestData(vector<TD_S_S>& testData)
{
    TD_S_S data = {};



    data.input = "3[a]2[bc]";
    data.output = "aaabcbc";
    testData.push_back(data);

    data.input = "2[bc]";
    data.output = "bcbc";
    testData.push_back(data);

    data.input = "3[a2[c]]";
    data.output = "accaccacc";
    testData.push_back(data);

    data.input = "2[abc]3[cd]ef";
    data.output = "abcabccdcdcdef";
    testData.push_back(data);
}