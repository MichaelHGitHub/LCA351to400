#include "header.h"

int findNthDigit(int n) {

    int result = 0;
    int phase = 1;
    int start = 1;
    int end = 9;
    long long digis = (end - start + 1) * phase;

    while (n >= digis) {
        n -= digis;
        ++phase;
        start *= 10;
        end = end * 10 + 9;
        digis = (long long)(end - start + 1) * phase;
    }

    start /= 10;
    end /= 10;

    int d = n % phase;
    int num = n / phase + end;

    if (d == 0) {
        result = num % 10;
    }
    else {
        ++num;
        for (int i = phase; i >= d; i--) {
            result = num % 10;
            num /= 10;
        }
    }
    return result;
}