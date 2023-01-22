#include "header.h"
#include <stack>

string decodeString2(string s) {
    string result;
    stack<int> repeat;
    stack<string> sub;

    int pos = 0;
    while (pos < s.length()) {
        if (s[pos] >= '1' && s[pos] <= '9') {
            int first_bracket = s.find_first_of('[', pos);
            int num = atoi(s.substr(pos, first_bracket).c_str());
            repeat.push(num);
            sub.push("");
            pos = first_bracket + 1;
        }
        else if (s[pos] == ']') {
            int rep_num = repeat.top();
            repeat.pop();
            string rep_str = sub.top();
            sub.pop();
            for (int i = 0; i < rep_num; i++) {
                if (sub.empty()) {
                    result += rep_str;
                }
                else {
                    sub.top() += rep_str;
                }
            }
            ++pos;
        }
        else {
            if (sub.empty()) {
                result += s[pos++];
            }
            else {
                sub.top() += s[pos++];
            }
        }
    }
    return result;
}