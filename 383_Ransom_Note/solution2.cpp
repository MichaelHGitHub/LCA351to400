#include "header.h"

bool canConstruct2(string ransomNote, string magazine) {
    int numbers[26] = { 0 };
    bool result = true;
    for (int i = 0; i < magazine.length(); i++) {
        if (i < magazine.length()) {
            ++(numbers[magazine[i] - 'a']);
        }
    }

    for (int i = 0; i < ransomNote.length(); i++) {
        if (i < ransomNote.length()) {
            if (numbers[ransomNote[i] - 'a'] == 0) {
                result = false;
                break;
            }
            --(numbers[ransomNote[i] - 'a']);
        }
    }
    return result;
}