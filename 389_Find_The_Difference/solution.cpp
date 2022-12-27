#include "header.h"

char findTheDifference(string s, string t) {
    int occurances[26] = {0};

    for (int i = 0; i < t.length(); i++) {
        occurances[t[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++) {
        occurances[s[i] - 'a']--;
    }

    char c = ' ';
    for (int i = 0; i < 26; i++) {
        if (occurances[i] == 1) {
            c = i + 'a';
            break;
        }
    }

    return c;
}