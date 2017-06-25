#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> v;
    for (int i = 0; i < nums.size(); i++) {
        int val = abs(nums[i])-1;
        if (nums[val] > 0) {
            nums[val] = -nums[val];
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0)
            v.push_back(i+1);
    }
    return v;
}

int main() {
    return 0;
}
