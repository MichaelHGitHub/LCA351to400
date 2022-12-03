#include "header.h"

int main(char* args[], int argc)
{
    vector<TD_VI_VI_I_VVI> test_data;

    PrepareTestData(test_data);

    for (int i = 0; i < test_data.size(); i++)
    {
        PrintInput(test_data[i]);
        vector<vector<int>> result = kSmallestPairs(test_data[i].input, test_data[i].input2, test_data[i].input3);

        CheckResults_Unorder(test_data[i], result);
    }

    return 0;
}
