#include "header.h"

void PrepareTestData(vector<TD_VVS_VD_VVS_VD>& testData)
{
    TD_VVS_VD_VVS_VD data = {};

    data.input = { {"a", "e"}, {"b", "e"} };
    data.input2 = { 4.0,3.0 };
    data.input3 = { {"a", "b"}, {"e", "e"}, {"x", "x"} };
    data.output = { 1.33333, 1.00000, -1.00000 };
    testData.push_back(data);

    data.input = { {"x1", "x2"}, {"x2", "x3"}, {"x3", "x4"}, {"x4", "x5"} };
    data.input2 = { 3.0, 4.0, 5.0, 6.0 };
    data.input3 = { {"x1", "x5"}, {"x5", "x2"}, {"x2", "x4"}, {"x2", "x2"}, {"x2", "x9"}, {"x9", "x9"} };
    data.output = { 360.00000, 0.00833,20.00000,1.00000,-1.00000,-1.00000 };
    testData.push_back(data);

    data.input = {{"a", "b"}, {"b", "c"}};
    data.input2 = {2.0, 3.0};
    data.input3 = {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}};
    data.output = {6.00000, 0.50000, -1.00000, 1.00000, -1.00000};
    testData.push_back(data);

    data.input = {{"a", "b"}, {"b", "c"}, {"bc", "cd"}};
    data.input2 = {1.5, 2.5, 5.0};
    data.input3 = {{"a", "c"}, {"c", "b"}, {"bc", "cd"}, {"cd", "bc"}};
    data.output = {3.75000, 0.40000, 5.00000, 0.20000};
    testData.push_back(data);

    data.input = {{"a", "b"}};
    data.input2 = {0.5};
    data.input3 = {{"a", "b"}, {"b", "a"}, {"a", "c"}, {"x", "y"}};
    data.output = {0.50000, 2.00000, -1.00000, -1.00000};
    testData.push_back(data);
}
