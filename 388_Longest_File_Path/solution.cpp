#include "header.h"
#include <stack>

struct FsNode {
    string name;
    bool is_file;
    int depth;

    FsNode(string& name, bool isFile, int depth) {
        this->name = name;
        this->is_file = isFile;
        this->depth = depth;
    }
};

int lengthLongestPath(string input) {

    vector<FsNode> nodes;

    // Build the file and dir nodes
    size_t index = 0;
    while (index < input.length()) {
        size_t pos = input.find_first_of("\n", index);
        if (pos == input.npos) {
            pos = input.length();
        }
        string sub = input.substr(index, pos - index);
        size_t begin = sub.find_first_not_of("\t");
        string name = sub.substr(begin, pos);
        bool is_file = !(name.find_first_of('.') == name.npos);
        nodes.push_back(FsNode(name, is_file, begin));

        index = pos + 1;
    }

    stack<FsNode*> pending;
    size_t max_length = 0;
    // the length for current file path
    size_t cur_length = 0;

    // scan the nodes for file, cache parent dir nodes in the stack
    for (int i = 0; i < nodes.size(); i++) {
        // If the current node is deeper than the cached ones, it means
        // the caches ones are out of date, pop them from the stack.
        while (!pending.empty() &&
            pending.top()->depth >= nodes[i].depth) {
            cur_length -= pending.top()->name.length();
            pending.pop();
        }

        if (nodes[i].is_file) {
            cur_length += nodes[i].name.length();
            cur_length += pending.size();
            max_length = max(max_length, cur_length);
            // Add the length for '/'
            cur_length -= pending.size();
            cur_length -= nodes[i].name.length();
        }
        else {
            pending.push(&nodes[i]);
            cur_length += pending.top()->name.length();
        }
    }
    return max_length;
}