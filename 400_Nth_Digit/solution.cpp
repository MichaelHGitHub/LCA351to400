#include "header.h"

int findNthDigit(int n) {
    int result = 0;
    int phase = 1;
    int start = 1;
    int end = 9;
    // digis is the the number of total digits the current phase provides.
    long long digis = (end - start + 1) * phase;

    while (n >= digis) {
        n -= digis;
        ++phase;
        start *= 10;
        end = end * 10 + 9;
        digis = (long long)(end - start + 1) * phase;
    }

    // Back to the end of the previous phase
    end /= 10;

    // d is the index of digits in the final number we need.
    int d = n % phase;
    // num is the number pre to the final number that contains the digit we need
    int num = n / phase + end;

    if (d == 0) {
        result = num % 10;
    }
    else {
        // ++num has the digit we need
        ++num;
        // now extract the digit we need
        for (int i = phase; i >= d; i--) {
            result = num % 10;
            num /= 10;
        }
    }
    return result;
}