#include "header.h"

int main(char* args[], int argc)
{
    vector<TD_VVS_VD_VVS_VD> test_data;

    PrepareTestData(test_data);

    for (int i = 0; i < test_data.size(); i++)
    {
        PrintInput(test_data[i]);
        vector<double> result = calcEquation(test_data[i].input,
            test_data[i].input2,
            test_data[i].input3);

        CheckResults(test_data[i], result);
    }

    return 0;
}
