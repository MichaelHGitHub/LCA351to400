#include "header.h"

string decodeRepeatString(string& s, int start, int& next);

string decodeString(string s) {
    int next = 0;
    return decodeRepeatString(s, 0, next);
}

string decodeRepeatString(string& s, int start, int& next) {
    string result;
    int pos = start;
    while (pos < s.length()) {
        if (s[pos] >= '1' && s[pos] <= '9') {
            int first_bracket = s.find_first_of('[', pos);
            int num = atoi(s.substr(pos, first_bracket).c_str());
            string sub = decodeRepeatString(s, first_bracket + 1, next);
            for (int i = 0; i < num; i++) {
                result += sub;
            }
            pos = next;
        }
        else if (s[pos] == ']') {
            next = pos + 1;
            break;
        }
        else {
            result += s[pos++];
        }
    }
    return result;
}