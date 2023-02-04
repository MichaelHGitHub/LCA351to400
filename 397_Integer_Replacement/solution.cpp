#include "header.h"
#include <unordered_map>

int numberOfOpt(unordered_map<int, int>& record, long long n);

int integerReplacement(int n) {
    unordered_map<int, int> record;
    return numberOfOpt(record, n);
}

int numberOfOpt(unordered_map<int, int>& record, long long n) {

    if (n <= 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }

    if (record[n] != 0) {
        return record[n];
    }

    int num1 = INT32_MAX, num2 = INT32_MAX;

    if ((n & 1) == 0) {
        num1 = numberOfOpt(record, n >> 1);
    }
    else {
        num2 = min(numberOfOpt(record, n + 1), numberOfOpt(record, n - 1));
    }

    record[n] = min(num1, num2) + 1;
    return record[n];
}