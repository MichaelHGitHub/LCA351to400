#include "header.h"

void PrepareTestData(vector<TD_S_I>& testData)
{
    TD_S_I data = {};

    data.input = "dir\nfile.ext";
    data.output = 8;
    testData.push_back(data);

    data.input = "file1.txt\nfile2.txt\nlongfile.txt";
    data.output = 12;
    testData.push_back(data);

    data.input = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
    data.output = 20;
    testData.push_back(data);

    data.input = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
    data.output = 32;
    testData.push_back(data);

    data.input = "a";
    data.output = 0;
    testData.push_back(data);
}