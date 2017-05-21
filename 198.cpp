#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rob(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    if (nums.size() == 1) {
        return nums[0];
    }
    int pre1 = nums[0], pre2 = max(nums[0], nums[1]), tmp;
    int res = pre2;
    for (int i = 2; i < nums.size(); i++) {
        res = max(pre1+nums[i], pre2);
        pre1 = pre2;
        pre2 = res;
    }
    return res;
}

int main() {
    return 0;
}
