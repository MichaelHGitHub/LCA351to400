#pragma once
#include <stack>
#include <Windows.h>
#include "..\common\common.h"


/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 */
class NestedInteger {
public:
    // Constructor initializes an empty nested list.
    NestedInteger();

    // Constructor initializes a single integer.
    NestedInteger(int value);

    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Set this NestedInteger to hold a single integer.
    void setInteger(int value);

    // Set this NestedInteger to hold a nested list and adds a nested integer to it.
    void add(const NestedInteger& ni);

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger>& getList() const;
};

class Solution {
public:
    NestedInteger deserialize(string s) {

        int pos = 0;
        int next = 0;

        std::stack<NestedInteger*> pending;
        NestedInteger* temp = nullptr;
        do {
            next = s.find_first_of("[],", pos);
            if (next == s.npos) {
                next = s.length();
            }
            string sub = s.substr(pos, next - pos);
            if (sub.length() != 0) {
                int val = 0;
                if (sub[0] == '-') {
                    val = -atoi(sub.c_str() + 1);
                }
                else {
                    val = atoi(sub.c_str());
                }
                temp = new NestedInteger(val);
            }

            if (next < s.length()) {
                if (s[next] == '[') {
                    pending.push(new NestedInteger);
                }
                else if (s[next] == ']') {
                    if (temp != nullptr) {
                        pending.top()->add(*temp);
                    }
                    temp = pending.top();
                    pending.pop();
                }
                else {
                    if (!pending.empty() && temp != nullptr) {
                        pending.top()->add(*temp);
                        temp = nullptr;
                    }
                }
            }
            pos = next + 1;
        } while (pos < s.length());
        return *temp;
    }
};