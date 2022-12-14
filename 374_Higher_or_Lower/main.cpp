#include "header.h"

int main(char* args[], int argc)
{
    vector<TD_I_I_I> test_data;

    PrepareTestData(test_data);

    for (int i = 0; i < test_data.size(); i++)
    {
        PrintInput(test_data[i]);
        Setup(test_data[i].input2);
        int result = guessNumber(test_data[i].input);

        CheckResults(test_data[i], result);
    }

    return 0;
}
