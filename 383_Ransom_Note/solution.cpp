#include "header.h"

bool canConstruct(string ransomNote, string magazine) {
    int numbers1[26] = { 0 };
    int numbers2[26] = { 0 };

    int len = max(ransomNote.length(), magazine.length());
    for (int i = 0; i < len; i++) {
        if (i < ransomNote.length()) {
            ++(numbers1[ransomNote[i] - 'a']);
        }

        if (i < magazine.length()) {
            ++(numbers2[magazine[i] - 'a']);
        }
    }

    bool result = true;
    for (int i = 0; i < 26; i++) {
        if (numbers2[i] < numbers1[i]) {
            result = false;
            break;
        }
    }
    return result;
}