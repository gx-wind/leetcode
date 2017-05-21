#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    int sum, imin, imax = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            swap(imin, imax);
        }
        imin = min(imin, nums[i]*imin);
        imax = max(imax, nums[i]*imax);

        sum = max(sum, imax);
    }
    return sum;
}

int main() {
    return 0;
}

