#include "header.h"
#include <unordered_map>

int findWeakPoint(const string& s, int k);

int longestSubstring(string s, int k) {
    int max_len = 0;
    // Check if s meets the requirement, if not, get the pos
    // of the first letter that doesn't meet the requirement.
    int pos = findWeakPoint(s, k);

    if (pos == -1) {
        max_len = s.length();
    }
    else {
        // Check left sub string.
        if (pos > max_len) {
            max_len = max(longestSubstring(s.substr(0, pos), k), max_len);
        }
        // Check right sub string.
        if ((int)s.length() - pos - 1 > max_len) {
            max_len = max(longestSubstring(s.substr(pos + 1, (int)s.length() - pos - 1), k), max_len);
        }
    }
    return max_len;
}

// Find the position of first char that doesn't repeat less than
// k times in the given string s.
// Return -1 if no such letter exists.
int findWeakPoint(const string& s, int k) {

    int freq[26] = {};
    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] > 0 && freq[s[i] - 'a'] < k) {
            return i;
        }
    }
    return -1;
}