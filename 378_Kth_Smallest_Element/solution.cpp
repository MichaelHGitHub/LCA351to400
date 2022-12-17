#include "header.h"

int kthSmallest(vector<vector<int>>& matrix, int k) {

    int len = matrix.size();
    int low = matrix[0][0];
    int high = matrix[len - 1][len - 1];

    while (low <= high) {
        int mid = (low + high) / 2;
        int count = 0;
        int j = len - 1;
        for (int i = 0;  i < len; i++) {
            while (j >= 0 && matrix[i][j] > mid) {
                --j;
            }
            count += j + 1;
        }

        if (count < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}
