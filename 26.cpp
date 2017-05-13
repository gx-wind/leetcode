#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len = nums.size();
    if (len == 0) {
        return len;
    }
    int begin = 1;
    int pre = nums[0];
    for (int i = 1; i < len; i++) {
        if (nums[i] != pre) {
            nums[begin++] = nums[i];
            pre = nums[i];
        }
    }
    return begin;
}

int main() {
    return 0;
}
