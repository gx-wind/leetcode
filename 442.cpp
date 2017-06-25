#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
    for (int i = 0; i < nums.size(); i++) {
        int val = abs(nums[i])-1;
        if (nums[val] < 0) {
            v.push_back(abs(nums[i]));
        } else {
            nums[val] = -nums[val];
        }
    }
    return v;
}

int main() {
    return 0;
}
