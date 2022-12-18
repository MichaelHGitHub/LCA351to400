#include "..\common\common.h"
#include <unordered_set>

class RandomizedSet {
public:
    RandomizedSet() {
    }

    bool insert(int val) {
        bool rv = false;
        if (s.find(val) == s.end()) {
            rv = true;
            s.insert(val);
        }
        return rv;
    }

    bool remove(int val) {
        bool rv = false;
        if (s.find(val) != s.end()) {
            rv = true;
            s.erase(val);
        }
        return rv;
    }

    int getRandom() {
        vector<int> v(s.begin(), s.end());
        return v[rand() % s.size()];
    }

private:
    unordered_set<int> s;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */