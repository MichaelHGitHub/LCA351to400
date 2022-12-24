#include "header.h"
#include <queue>
vector<int> g;
queue<int> q;

void rig(vector<int>& result, int i, int n);

vector<int> lexicalOrder(int n) {
    vector<int> result;
    for (int i = 1; i < 10; i++) {
        rig(result, i, n);
    }
    return result;
}

void rig(vector<int>& result, int i, int n) {
    if (i > n) {
        return;
    }
    result.push_back(i);
    g.push_back(i);
    q.push(i);
    for (int j = 0; j < 10; j++) {
        rig(result, i * 10 + j, n);
    }
}