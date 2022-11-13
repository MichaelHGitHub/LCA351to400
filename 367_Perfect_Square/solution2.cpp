#include "header.h"

bool isPerfectSquare2(int num)
{
    bool result = false;
    int low = 1, high = num;

    while (low <= high)
    {
        int mid = ((long)low + high) / 2;
        int div = num / mid;
        if (num % mid == 0 && div == mid)
        {
            result = true;
            break;
        }
        else if (div < mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}