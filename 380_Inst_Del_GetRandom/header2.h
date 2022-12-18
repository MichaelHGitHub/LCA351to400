//#include <vector>
#include <unordered_map>

using namespace std;

class RandomizedSet {
public:
    RandomizedSet() {
    }

    bool insert(int val) {
        bool rv = false;
        if (orders.find(val) == orders.end()) {
            rv = true;
            nums.push_back(val);
            orders[val] = nums.size() - 1;
        }
        return rv;
    }

    bool remove(int val) {
        bool rv = false;
        if (orders.find(val) != orders.end()) {
            rv = true;
            // Move last element to the place of val
            orders[nums[nums.size() - 1]] = orders[val];
            nums[orders[val]] = nums[nums.size() - 1];
            nums.pop_back();
            orders.erase(val);
        }
        return rv;
    }

    int getRandom() {
        return nums[rand() % nums.size()];
    }

private:
    vector<int> nums;
    unordered_map<int, int> orders;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */