#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    int pre = nums[0];
    int sum = pre;
    for (int i = 1; i < nums.size(); i++) {
        if (pre > 0) {
            pre = nums[i] + pre;
        } else {
            pre = nums[i];
        }
        sum = max(pre, sum);
    }
    return sum;
}

int main() {
    return 0;
}
