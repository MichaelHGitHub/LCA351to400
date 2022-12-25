#include "header.h"

int firstUniqChar(string s) {

    int occurances[26] = {};

    for (int i = 0; i < s.length(); i++) {
        occurances[s[i] - 'a']++;
    }

    int result = -1;
    for (int i = 0; i < s.length(); i++) {
        if (occurances[s[i] - 'a'] == 1) {
            result = i;
            break;
        }
    }
    return result;
}