#include <iostream>
#include <vector>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> res;
    vector<int> v(nums.size()+1, 0);
    for (int i = 0; i < nums.size(); i++) {
        if (v[nums[i]] == 1) {
            res.push_back(nums[i]);
        } else {
            v[nums[i]] = 1;
        }
    }
    for (int i = 1; i <= nums.size(); i++) {
        if (v[i] == 0) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    return 0;
}
