#include "header.h"

int lastRemaining(int n) {

    int step = 1;
    int left = 1, right = n;

    while(left > 0 && left < right && right <= n) {
        if (step > 0) {
            int temp1 = left + step;
            int temp2 = 0;
            while (temp1 <= right) {
                temp2 = temp1;
                temp1 += 2 * step;
            }
            right = temp2;
        }
        else {
            int temp1 = right + step;
            int temp2 = 0;
            while (temp1 >= left) {
                temp2 = temp1;
                temp1 += 2 * step;
            }
            left = temp2;
        }
        step *= -2;
    }
    return step < 0 ? left : right;
}

