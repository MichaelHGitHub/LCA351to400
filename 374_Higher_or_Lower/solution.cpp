#include "header.h"

namespace
{
    int g_current_pick;
}

void Setup(int pick)
{
    g_current_pick = pick;
}

int guess(int n) {
    int result = 0;
    if (n > g_current_pick) {
        result = -1;
    }
    else if (n < g_current_pick) {
        result = 1;
    }
    return result;
}

int guessNumber(int n) {

    int result = 0;
    int low = 1;
    int high = n;

    while (low <= high)
    {
        int mid = ((long long)low + high) / 2;
        if (0 == guess(mid))
        {
            result = mid;
            break;
        }
        else if (-1 == guess(mid))
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