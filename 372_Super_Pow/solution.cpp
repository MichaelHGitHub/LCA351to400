#include "header.h"

int powerMode(int a, int k);

int superPow(int a, vector<int>& b)
{
    if (b.size() == 0)
    {
        return 1;
    }
    else
    {
        int last_dig = b.back();
        b.pop_back();

        return powerMode(superPow(a, b), 10) * powerMode(a, last_dig) % 1337;
    }
}

// Basic Rule : (a* b) % c = (a % c * b % c) % c
int powerMode(int a, int k)
{
    int result = 1;

    for (int i = 0; i < k; i++)
    {
        result *= (a % 1337);
        result %= 1337;
    }

    return result;
}