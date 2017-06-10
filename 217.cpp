#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int,bool> m;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) == m.end()) {
            m[nums[i]] = true;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    return 0;
}
