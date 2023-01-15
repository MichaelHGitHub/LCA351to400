#include "header.h"

bool validUtf8(vector<int>& data) {

    bool isUtf = true;
    int mask_4b = 0xF8, prefix_4b = 0xF0;
    int mask_3b = 0xF0, prefix_3b = 0xE0;
    int mask_2b = 0xE0, prefix_2b = 0xC0;
    int mask_1b = 0x80, prefix_1b = 0x00;
    int mask_f = 0xC0, prefix_f = 0x80;

    int index = 0;
    while (index < data.size()) {
        int tem = data[index] & mask_2b;
        if ((data[index] & mask_4b) == prefix_4b) {
            if (index + 3 < data.size() &&
                ((data[index + 1] & mask_f) == prefix_f) &&
                ((data[index + 2] & mask_f) == prefix_f) &&
                ((data[index + 3] & mask_f) == prefix_f)) {
                index += 4;
            }
            else {
                isUtf = false;
                break;
            }
        }
        else if ((data[index] & mask_3b) == prefix_3b) {
            if (index + 2 < data.size() &&
                ((data[index + 1] & mask_f) == prefix_f) &&
                ((data[index + 2] & mask_f) == prefix_f)) {
                index += 3;
            }
            else {
                isUtf = false;
                break;
            }
        }
        else if ((data[index] & mask_2b) == prefix_2b) {
            if (index + 1 < data.size() &&
                ((data[index + 1] & mask_f) == prefix_f)) {
                index += 2;
            }
            else {
                isUtf = false;
                break;
            }
        }
        else if ((data[index] & mask_1b) == prefix_1b) {
            ++index;
        }
        else {
            isUtf = false;
            break;
        }
    }
    return isUtf;
}