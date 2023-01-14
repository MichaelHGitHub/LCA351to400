#include "header.h"

bool isSubsequence(string s, string t) {
    bool result = true;
    int pos_s = 0;

    for (int i = 0; i < s.length(); i++) {
        int pos_t = t.find_first_of(s[i], pos_s);
        if (pos_t != t.npos && pos_t >= pos_s) {
            pos_s = pos_t + 1;
        }
        else {
            result = false;
            break;
        }
    }
    return result;
}