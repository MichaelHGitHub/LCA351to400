#include "header.h"

bool isPerfectSquare(int num)
{
    bool result = false;
    int seed = 1;

    while (num >= seed)
    {
        if (num % seed == 0 && num / seed == seed)
        {
            result = true;
            break;
        }
        else if (num / seed < seed)
        {
            break;
        }
        ++seed;
    }

    return result;
}