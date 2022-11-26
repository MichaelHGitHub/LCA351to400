#include "header.h"

int getSum(int a, int b)
{
    int result = 0;
     bool carry_over = false;

    for (int i = 0; i < 32; i++)
    {
        int bit_a = a & (1 << i);
        int bit_b = b & (1 << i);
        int bit_s = bit_a ^ bit_b;
        if (carry_over)
        {
            bit_s ^= (1 << i);
        }
        result |= bit_s;

        if (bit_a != 0 && bit_b != 0)
        {
            carry_over = true;
        }
        else if (bit_a == 0 && bit_b == 0)
        {
            carry_over = false;
        }

        // Note: carry_over remains the same value when bit_a is different
        // from bit_b
    }

    return result;
}