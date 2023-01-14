#include "header.h"

bool isSubsequence2(string s, string t) {
    vector<vector<int>> record(26);

    for (int i = 0; i < t.length(); i++) {
        record[t[i] - 'a'].push_back(i);
    }

    bool result = true;
    vector<int> index_progress(26, 0);

    int pre_pos = -1;
    for (int i = 0; i < s.length(); i++) {
        while (true) {
            if (index_progress[s[i] - 'a'] < record[s[i] - 'a'].size()) {
                int cur_pos = record[s[i] - 'a'][index_progress[s[i] - 'a']];
                index_progress[s[i] - 'a']++;
                if (cur_pos > pre_pos) {
                    pre_pos = cur_pos;
                    break;
                }
            }
            else {
                result = false;
                break;
            }
        }
        if (!result) {
            break;
        }
    }
    return result;
}